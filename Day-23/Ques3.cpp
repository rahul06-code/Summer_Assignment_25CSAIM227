#include <iostream>
using namespace std;

int main() {
    char str1[200];
    char str2[200];

    cout << "Enter first string : ";
    cin.getline(str1, 200);

    cout << "Enter second string : ";
    cin.getline(str2, 200);

    int count[200] = {0};

    for (int i = 0; str1[i] != '\0'; i++) {
        count[str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            cout << "Strings are not anagram " << endl ;
            return 0;
        }
    }

    cout << "Strings are anagram  " << endl ;
    return 0;
}
