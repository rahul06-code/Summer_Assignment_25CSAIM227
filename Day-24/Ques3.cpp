#include <iostream>
using namespace std;

int main() {
    char str[200];
    int i;

    cout << "Enter a sentence : ";
    cin.getline(str, 200);

    int Maxlen = 0;
    int Maxstart = 0;

    int Currentlen = 0;
    int Currentstart = 0;

    for(i = 0; str[i] != '\0'; i++){
        if (str[i] != ' ') {
            if (Currentlen == 0) {
                Currentstart = i;
            }
            Currentlen++;
        }
        
        if(str[i] == ' ' || str[i + 1] == '\0'){
            if (Currentlen > Maxlen) {
                Maxlen = Currentlen;
                Maxstart = Currentstart;
            }
            Currentlen = 0;
        }
    }

    cout << " Longest word : ";
    for(i = Maxstart; i < Maxstart + Maxlen; i++){
        cout << str[i];
    }
    cout << endl;
    return 0;
}
