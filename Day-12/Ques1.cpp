#include <iostream>
using namespace std;

bool Ispalindromenumber(int num){

    int originalnum = num ;
    int rev = 0 ;

    if (num < 0)
     return 0;

    while (num > 0) {
        int lastdigit = num % 10 ;
        rev = (rev * 10) + lastdigit ;
        num = num / 10;
    }
    return originalnum == rev ;
}

int main(){

    int N;
    cout << "Enter number : " ;
    cin >> N;

    if (Ispalindromenumber(N)){
        cout << N << " is a palindrome number" << endl ;
    } else{
        cout << N << " is not a palindrome number" << endl ;
    }
    return 0;
}
