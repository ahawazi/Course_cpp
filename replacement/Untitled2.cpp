#include <iostream>
#include <cmath>

int main() {
    double number1, number2;

    std::cin >> number1 >> number2;

    int integerPart = static_cast<int>(number1);
    double fractionalPart = number1 - integerPart;

    double result = integerPart - (integerPart % 10) + number2;

    result += fractionalPart;

    std::cout << result << std::endl;

    return 0;
}
