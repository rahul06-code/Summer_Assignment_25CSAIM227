#include <iostream>
using namespace std;

int Sum(int num1, int num2) {
    return num1 + num2 ;
}

int main() {

    int n1, n2;
    cout << "Enter first number : " ;
    cin >> n1 ;
 
    cout << "Enter second number : " ;
    cin >> n2;

    int ans = Sum(n1, n2);
    cout << "The sum of two number is : " << ans << endl ;

    return 0;
}
