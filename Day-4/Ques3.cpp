#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<< "Enter Number: ";
    cin>> n;
    int digit;
    int result = 0;
    int original_num = n;
    while(n > 0){
        digit = n % 10;
        result =  result + (digit * digit * digit );
        n = n / 10;

    }
    if(result == original_num){
        cout << original_num << " is an armsrrong number" << endl;
    } else {
        cout << original_num << " is  not an armsrrong number" << endl;
    }
    return 0;
}