#include <iostream>
using namespace std;

int main(){
    char str1[200];
    char str2[200];
    int i, j;

    cout << "Enter first string : ";
    cin.getline(str1, 200);

    cout << "Enter second string : ";
    cin.getline(str2, 200);

    int len1 = 0;
    while(str1[len1] != '\0'){
        len1++;
    }

    int len2 = 0;
    while(str2[len2] != '\0'){
        len2++;
    }

    if(len1 != len2){
        cout << " Strings are not rotations " << endl ;
        return 0;
    }

    int Rotationfound = 0;

    for(i = 0; i < len1; i++){
        int match = 1;
        int k = i; 

        for(j = 0; j < len1; j++){
            if(str1[k] != str2[j]){
                match = 0;
                break;
            }
            k++; 
            if(k == len1){
                k = 0;
            }
        }
        if(match == 1){
            Rotationfound = 1;
            break;
        }
    }

    if(Rotationfound == 1){
        cout << " Strings are rotations " << endl ;
    }else{
        cout << " Strings are not rotations " << endl ;
    }
    return 0;
}
