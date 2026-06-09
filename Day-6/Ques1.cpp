#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n; 
    cout << "Enter Number : ";
    cin >> n ;
    int remainder;
    int ans = 0;
    int position = 1;

    while(n != 0){

        remainder = n % 2;
        ans = ans + (remainder * position);
        position = position * 10 ;
        n = n/2;
    }
    cout << "The Decimal Number is " << ans << endl; 
   
    return 0;
}

