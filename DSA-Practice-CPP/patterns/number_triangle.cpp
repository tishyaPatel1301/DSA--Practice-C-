// Number Triangle Pattern
// Concept: Nested loops with number printing

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    cout << "\nNumber Triangle:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

/*
Output (n=5):
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
