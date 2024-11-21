#include <iostream>

using namespace std;

int main() {
    int number, onesDigit;

    cin >> number;

    onesDigit = number % 10;

    cout << onesDigit << endl;

    return 0;
}
