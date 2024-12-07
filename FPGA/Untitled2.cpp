#include <iostream>

void add(int a, int b, int &result) {
    result = a + b;
}

int main() {
    int a, b, result;
    std::cout << "give the number a" << std::endl;
    std::cin >> a;
    std::cout << "give the number b" << std::endl;
    std::cin >> b;
    add(a, b, result);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

