#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;

    if (n <= 0) {
        cout << "error" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << endl;
    }

    return 0;
}

