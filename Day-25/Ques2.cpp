#include <iostream>
using namespace std;

int main(){
    char str1[200];
    char str2[200];

    cout << "Enter first string : ";
    cin.getline(str1, 200);

    cout << "Enter second string : ";
    cin.getline(str2, 200);

    int count1[256] = {0};
    int count2[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++){
        count1[str1[i]] = 1;
    }

    for (int i = 0; str2[i] != '\0'; i++){
        count2[str2[i]] = 1;
    }

    cout << "Common characters are : ";
    int foundCommon = 0;
    
    for(int i = 0; i < 256; i++){
        if(count1[i] == 1 && count2[i] == 1){
            cout << (char)i << " ";
            foundCommon = 1;
        }
    }

    if(foundCommon == 0){
        cout << "None";
    }
    
    cout << endl;
    return 0;
}
