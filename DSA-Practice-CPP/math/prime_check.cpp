// Prime Number Check + List All Primes up to N
// Concept: Trial division, Sieve of Eratosthenes (basic)

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int choice;
    cout << "1. Check if a number is prime\n";
    cout << "2. List all primes up to N\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "Enter number: ";
        cin >> n;
        if (isPrime(n))
            cout << n << " is a Prime number." << endl;
        else
            cout << n << " is NOT a Prime number." << endl;
    } else {
        int n;
        cout << "Enter N: ";
        cin >> n;
        cout << "Primes up to " << n << ": ";
        for (int i = 2; i <= n; i++) {
            if (isPrime(i))
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
