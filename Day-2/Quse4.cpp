#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int digit ;
    int reverse_num = 0;
     int original_num = n;

    while(n>0){
        digit = n % 10;
        reverse_num = (reverse_num * 10) + digit;
        n = n/10;
    }
    if (original_num == reverse_num){
        cout << original_num << " is a palidrome number" << endl;
    } else {
        cout << original_num << " is not a palidrome number" << endl;

    }

    return 0;
}