#include <iostream>
using namespace std;

int main(){
    char str[200];

    cout << "Enter a string : ";
    cin.getline(str, 200);

    int count[200] = {0};

    for (int i = 0; str[i] != '\0'; i++){
        count[str[i]]++;
    }

    int found = 0; 
    for (int i = 0; str[i] != '\0'; i++){
        if (count[str[i]] == 1) {
            cout << "First non-repeating character : " << str[i] << endl ;
            found = 1 ;
            break ;    
        }
    }

    if (found == 0) {
        cout << "All characters are repeating " << endl ;
    }
    return 0;
}
