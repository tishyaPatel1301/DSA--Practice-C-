// Armstrong Number Check
// Concept: Sum of digits raised to power of digit count
// Example: 153 = 1³ + 5³ + 3³ = 153 ✓

#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;
    int digits = to_string(n).length();

    while (n > 0) {
        int d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int choice;
    cout << "1. Check if a number is Armstrong\n";
    cout << "2. List all Armstrong numbers up to N\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "Enter number: ";
        cin >> n;
        if (isArmstrong(n))
            cout << n << " is an Armstrong number." << endl;
        else
            cout << n << " is NOT an Armstrong number." << endl;
    } else {
        int n;
        cout << "Enter N: ";
        cin >> n;
        cout << "Armstrong numbers up to " << n << ": ";
        for (int i = 1; i <= n; i++) {
            if (isArmstrong(i))
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
