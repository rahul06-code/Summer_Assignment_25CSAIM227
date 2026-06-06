#include<iostream>
using namespace std;

int main() {
    int n1, n2 , i;
    int remainder;

    cout<< "Enter Number 1: ";
    cin >> n1;

    cout<< "Enter Number 2: ";
    cin >> n2;
    
    while(n2 != 0){
        remainder = n1 % n2;
        n1 = n2;
        n2 = remainder;
    }
    cout << " The GCD is: " << n1  << endl;

    return 0;
}