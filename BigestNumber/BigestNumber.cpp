#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 < num2) swap(num1, num2);
    if (num1 < num3) swap(num1, num3);
    if (num2 < num3) swap(num2, num3);

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}
