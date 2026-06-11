#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int Num ;

    cout << "Enter a number: ";
    cin >> Num;

    if (isPrime(Num)){
        cout << Num << " is a prime number " << endl;
    } else {
        cout << Num << " is not a prime number " << endl;
    }
    return 0 ;
}
