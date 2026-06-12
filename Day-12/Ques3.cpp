#include <iostream>
using namespace std;

void printFibonacci(int n) {
    
    int a = 0, b = 1 ;

    if (n <= 0)
    return;

    for (int i = 1; i <= n; i++){

        cout << a << " " ;
        int c = a + b ;
        a = b ;
        b = c ;
    }
    cout << endl ;
}

int main() {

    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    cout << "Fibonacci Series: " ;
    printFibonacci(N) ;

    return 0;
}
