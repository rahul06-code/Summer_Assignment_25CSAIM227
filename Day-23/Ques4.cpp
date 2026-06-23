#include <iostream>
using namespace std;

int main(){
    char str[200];

    cout << "Enter a string : ";
    cin.getline(str, 200);

    int counts[200] = {0};

    for (int i = 0; str[i] != '\0'; i++){
        counts[str[i]]++;
    }

    int Maxcount = 0;
    char Maxchar = ' ';

    for (int i = 0; str[i] != '\0'; i++){
        if (counts[str[i]] > Maxcount){
            Maxcount = counts[str[i]];
            Maxchar = str[i];
        }
    }
    if (Maxcount > 0) {
        cout << "Maximum occurring character : " << Maxchar << endl ;
    } else {
        cout << "Empty string entered " << endl ;
    }
    return 0;
}
