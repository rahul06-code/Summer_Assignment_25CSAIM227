#include <iostream>
using namespace std;

int main(){
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[length] != '\0') {
        length++;
    }
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            cout << "The string is notpalindrome" << endl ;
            return 0; 
        }
        start++;
        end--;
    }
    cout << "string is palindrome" << endl ;
    return 0;
}
