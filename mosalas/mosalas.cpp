#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double side1, side2, side3;

    cin >> side1 >> side2 >> side3;

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        cout <<"Mosalas Mokhtalef Azla Ast!" ;
        return 0;
    }

    if (side1 == side2 && side2 == side3) {
        cout << "Mosalas Motesazi Azla Ast!";
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "Mosalas Motesavi Saghein Ast!";
     
    } else {
        cout << "Mosalas Mokhtalef Azla Ast!";
    }

    return 0;
}
