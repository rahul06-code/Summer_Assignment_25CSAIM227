#include <iostream>
using namespace std;

int main(){
    char str[200];

    cout << "Enter a string : ";
    cin.getline(str, 200);

    int count[200] = {0};
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++){
        count[str[i]]++;

        if (count[str[i]] > 1){
            cout << "First repeating character : " << str[i] << endl;
            found = 1;
            break;
        }
    }
    if (found == 0){
        cout << "No repeating character found " << endl;
    }
    return 0;
}
