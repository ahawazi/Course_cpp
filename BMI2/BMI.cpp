#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height, bmi;

    cin >> weight;
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(4);
    cout << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kambod Vazn" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Vazne Normal" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Ezafe Vazn" << endl;
    } else {
        cout << "Chaghi" << endl;
    }

    return 0;
}

