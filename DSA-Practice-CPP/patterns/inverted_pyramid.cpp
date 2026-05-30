// Inverted Star Pyramid
// Concept: Nested loops, decreasing stars

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    cout << "\nInverted Star Pyramid:\n";
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int k = 1; k <= (2 * i - 1); k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
