#include <iostream>
using namespace std;

int main(){
    char str[200];
    int words = 0;

    cout << "Enter a sentence : ";
    cin.getline(str, 200); 

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }
    }

    if (str[0] != '\0' && str[0] != ' '){
        words++;
    }

    cout << "Total number of words : " << words << endl ;
    return 0;
}
