#include <iostream>
using namespace std;

int main() {
    int size;

    cin >> size;

    if (size <= 0) {
        cout << "error ..." << endl;
    } else {
        int* arr = new int[size];

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    }

    return 0;
}

