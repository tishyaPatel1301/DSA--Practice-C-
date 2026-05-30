// Count Vowels and Consonants
// Concept: Character classification

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowels = 0, consonants = 0;
    string vowelList = "aeiouAEIOU";

    for (char ch : str) {
        if (isalpha(ch)) {
            if (vowelList.find(ch) != string::npos)
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels     : " << vowels << endl;
    cout << "Consonants : " << consonants << endl;

    return 0;
}
