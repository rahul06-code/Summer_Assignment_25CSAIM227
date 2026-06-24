#include <iostream>
using namespace std;

int main(){
    char str[200];
    int i;

    cout << "Enter a string : ";
    cin.getline(str, 200);

    for(i = 0; str[i] != '\0'; i++){
        int count = 1;

        while(str[i] == str[i + 1] && str[i + 1] != '\0'){
            count++;
            i++;
        }
        cout << str[i] << count;
    }
    cout << endl;
    return 0;
}
