#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int original_num ;
    int reverse_num = 0;

    if(n<0){
        n = -n;
    }

    while(n>0){
        original_num = n % 10;
        reverse_num = (reverse_num * 10) + original_num;
        n = n/10;
    }
    cout << "Reverse Number is" << " : " << reverse_num << endl;

    return 0;
}