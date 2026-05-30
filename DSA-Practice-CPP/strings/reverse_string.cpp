// Reverse a String
// Concept: Two-pointer on string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string original = str;
    int left = 0, right = str.length() - 1;

    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    cout << "Original : " << original << endl;
    cout << "Reversed : " << str << endl;

    return 0;
}
