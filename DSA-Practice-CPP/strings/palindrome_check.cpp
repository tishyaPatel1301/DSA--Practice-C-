// Palindrome Check
// Concept: Compare string with its reverse

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed)
        cout << "\"" << str << "\" is a Palindrome." << endl;
    else
        cout << "\"" << str << "\" is NOT a Palindrome." << endl;

    return 0;
}
