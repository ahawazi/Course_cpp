#include <iostream>
using namespace std;

int main() {
    int size, searchNum;

    cin >> size;

    if (size <= 0) {
        cout << "error ..." << endl;
    } else {
        int* arr = new int[size];

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cin >> searchNum;

        bool found = false;
        for (int i = 0; i < size; i++) {
            if (arr[i] == searchNum) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "adad shoma dar array vojod darad va adad shoma: " << searchNum << " ast." << endl;
        } else {
            cout << "addad shoma dar array vojod nadarad" << endl;
        }

        delete[] arr;
    }

    return 0;
}

