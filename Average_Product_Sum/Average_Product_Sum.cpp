#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    double sum, product, average;

    cin >> num1 >> num2 >> num3 >> num4;

    sum = num1 + num2 + num3 + num4;
    product = num1 * num2 * num3 * num4;
    average = sum / 4.0;

    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl;
    cout << "Average : " << average << endl;

    return 0;
}
