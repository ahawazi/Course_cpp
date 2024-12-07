#include <iostream>

int main() {
    int number;

    std::cin >> number;

    for (int i = 1; i <= number; i += 2) {
        std::cout << i;
        if (i + 2 <= number) {
            std::cout << " , ";
        }
    }
    std::cout << " ,";
    
    return 0;
}
