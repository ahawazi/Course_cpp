#include <iostream>
#include <hls_stream.h>

#define WINDOW_SIZE 4

// Function to calculate the moving average
void moving_average(hls::stream<int> &input, hls::stream<int> &output) {
    static int window[WINDOW_SIZE] = {0};
    int sum = 0;

    // Shift the values in the window to make space for the new input
    for (int i = WINDOW_SIZE - 1; i > 0; i--) {
        window[i] = window[i - 1];
    }

    // Read the new input value
    int new_value = input.read();
    window[0] = new_value;

    // Compute the sum of the window
    for (int i = 0; i < WINDOW_SIZE; i++) {
        sum += window[i];
    }

    // Write the average to the output
    output.write(sum / WINDOW_SIZE);
}

int main() {
    hls::stream<int> input_stream;
    hls::stream<int> output_stream;

    // Test input data
    int test_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num_elements = sizeof(test_data) / sizeof(test_data[0]);

    // Push test data into the input stream
    for (int i = 0; i < num_elements; i++) {
        input_stream.write(test_data[i]);
        moving_average(input_stream, output_stream);

        // Print the output
        if (!output_stream.empty()) {
            int result = output_stream.read();
            std::cout << "Average after input " << test_data[i] << ": " << result << std::endl;
        }
    }

    return 0;
}

