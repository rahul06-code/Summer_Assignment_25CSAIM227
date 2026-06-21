#include <iostream>
using namespace std;

int main(){
    char str[100];
    int length = 0;

    cout << "Enter a string : ";
    cin >> str;

    while (str[length] != '\0'){
        length++;
    }
    int start = 0;
    int end = length - 1;

    while (start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++ ;
        end-- ;
    }

    cout << "Reversed string : " << str << endl ;
    return 0;
}
