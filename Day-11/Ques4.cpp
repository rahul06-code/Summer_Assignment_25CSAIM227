#include <iostream>
using namespace std;

int findFactorial(int num){
    if (num < 0) {
        return -1 ;
    }
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i ;
    }
    return fact;
}

int main() {
    int N ;

    cout << "Enter a positive number : ";
    cin >> N;

    long long result = findFactorial(N) ;

    if (result == -1){
        cout << "Factorial of a negative number does not exist " << endl ;
    } else {
        cout << "The factorial is : " << result << endl ;
    }
    return 0;
}
