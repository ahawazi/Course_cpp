#include <iostream>
using namespace std;

int main() {  
    int number;

    cin >> number;

    if (number % 2 == 0) {
        cout << "Zoj Ast!" << endl;
    } else {
        cout << "Zoj Nist!" << endl;
    }

    return 0;
}

