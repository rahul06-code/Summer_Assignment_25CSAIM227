#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int original_num ;
    int digit = 1;
    if(n<0){
        n = -n;
    }

    while(n>0){
        original_num = n % 10;
        digit = digit * original_num;
        n = n/10;
    }
    cout << "Reverse Number is" << " : " << digit << endl;

    return 0;
}