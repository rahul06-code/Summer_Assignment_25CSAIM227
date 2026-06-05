#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int digit ;
    int sum = 0;
    if (n < 0){
        n = -n;
    }
    while(n > 0){
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;

    }
    cout << "sum of digits are" << " : " << sum << endl;
    return 0;
}