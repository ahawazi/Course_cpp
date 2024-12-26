#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int size;

    cin >> size;

    if (size <= 0) {
        cout << "error ..." << endl;
    } else {
        int* arr = new int[size];
        double sum = 0;

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        double average = sum / size;

        cout << fixed << setprecision(1);
        cout << "Average = " << average << endl;

        for (int i = 0; i < size; i++) {
            cout << arr[i] << endl;
        }

        delete[] arr;
    }

    return 0;
}

