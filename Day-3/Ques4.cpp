#include<iostream>
using namespace std;

int main() {
    int n1 , n2 , i;
    int remainder;
    cout<< "Enter Number 1: ";
    cin >> n1;

    cout<< "Enter Number 2: ";
    cin >> n2;

    int original_n1 = n1;
    int original_n2 = n2;

    while(n2 != 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    int gcd = n1 ;
    int lcm = (original_n1 * original_n2) / gcd ;

    cout << "The LCM of " << original_n1 << " and " << original_n2 << " is : " << lcm << endl;

    return 0;
}