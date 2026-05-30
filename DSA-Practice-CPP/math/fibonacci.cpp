// Fibonacci Series
// Concept: Iterative approach
// Time Complexity: O(n)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    long long a = 0, b = 1;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a;
        if (i < n) cout << ", ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
