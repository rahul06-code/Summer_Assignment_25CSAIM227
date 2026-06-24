#include <iostream>
using namespace std;

int main() {
    char str[200];
    int i;

    cout << "Enter a string : ";
    cin.getline(str, 200);

    int counts[200] = {0};

    cout << "String after removing duplicates : ";
    for(i = 0; str[i] != '\0'; i++){
        if(counts[str[i]] == 0){
            cout << str[i];
            counts[str[i]] = 1;
        }
    }
    cout << endl;

    return 0;
}
