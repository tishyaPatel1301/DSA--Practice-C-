// Diamond Star Pattern
// Concept: Upper pyramid + lower inverted pyramid

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter half-size of diamond: ";
    cin >> n;

    cout << "\nDiamond Pattern:\n";

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= (2 * i - 1); k++) cout << "*";
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= (2 * i - 1); k++) cout << "*";
        cout << endl;
    }

    return 0;
}
