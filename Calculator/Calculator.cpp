#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cin >> num1;
	cin >> op;
	cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "error" << endl;
            } else {
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "error2" << endl;
    }

    return 0;
}
