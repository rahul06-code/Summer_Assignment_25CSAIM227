#include <iostream>
using namespace std;

int main(){
    char str[100];
    int vowels = 0;
    int consonants = 0;

    cout << "Enter a string : ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++ ;
        }
    }

    cout << "Vowel : " << vowels << endl ;
    cout << "Consonant : " << consonants << endl ;
    return 0 ;
}
