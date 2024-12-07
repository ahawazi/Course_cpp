#include <iostream>

using namespace std;

int main() {
    double height, weight, bmi;

    cin >> height;

    cin >> weight;

    bmi = weight / (height * height);

    cout << bmi << endl;

    return 0;
}
