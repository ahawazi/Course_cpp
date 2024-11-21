#include <iostream>

int main() {
	float M_PI;	
	M_PI = 3.14;
    double radius;

    std::cin >> radius;

    double perimeter = 2 * M_PI * radius;
    double area = M_PI * radius * radius;

    std::cout << perimeter << std::endl;
    std::cout << area << std::endl;

    return 0;
}
