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

        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        cout << "Bozorg tarin adad shoma dar array : " << max << " ast!" << endl;

        delete[] arr;
    }

    return 0;
}

