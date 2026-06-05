#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;
    if(n < 0){
        n = -n;
    }

    while(n > 0){
        sum = (n % 10) + sum;
        n = n / 10 ;
    }
    cout << " Sum of digits : " << sum << endl;
    
    return 0;
}