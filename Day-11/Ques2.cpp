#include <iostream>
using namespace std;

int findmax(int num1, int num2) {
    if (num1 > num2) {
        return num1 ;
    } else {
        return num2 ;
    }
}

int main() {
    int n1, n2;

    cout << "Enter first number: " ;
    cin >> n1;

    cout << "Enter second number: " ;
    cin >> n2;

    int maximum = findmax(n1, n2);
    cout << "The maximum number is : " << maximum << endl ;

    return 0 ;
}
