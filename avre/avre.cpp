#include <iostream>

int main() {
    int count;
    std::cin >> count;

    double sum = 0;

    for (int i = 0; i < count; ++i) {
        double number;
        std::cin >> number;
        sum += number;
    }

    double average = sum / count;
    std::cout << average << std::endl;

    return 0;
}

