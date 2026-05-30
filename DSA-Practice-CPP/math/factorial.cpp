// Factorial — Iterative and Recursive
// Concept: Loops vs Recursion comparison

#include <iostream>
using namespace std;

// Iterative
long long factIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

// Recursive
long long factRecursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factRecursive(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
        return 1;
    }

    cout << "Factorial (Iterative) of " << n << " = " << factIterative(n) << endl;
    cout << "Factorial (Recursive) of " << n << " = " << factRecursive(n) << endl;

    return 0;
}
