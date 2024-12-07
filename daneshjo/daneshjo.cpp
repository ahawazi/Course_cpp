#include <iostream>

int main() {
    const int numStudents = 20;
    int scores[numStudents];
    int passCount = 0;

    for (int i = 0; i < numStudents; ++i) {
        std::cin >> scores[i];
    }

    for (int i = 0; i < numStudents; ++i) {
        if (scores[i] > 10) { 
            passCount++;
        }
    }

    std::cout << passCount << std::endl;

    return 0;
}
