#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter Number: ";
    cin>> n;
    long long fact = 1;
    int i = n;

    if(n < 0){
        cout << "factorial of negative number does not exist" << endl ; 
        return 0;
    }

    while(i > 1){
        
        fact = fact * i ;
        i--;
    }
    cout << "Factorial of " << n << " : " << fact << endl;
    
    return 0;

}