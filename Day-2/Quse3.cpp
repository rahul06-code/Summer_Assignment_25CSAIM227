#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int product = 1;

    if (n == 0){
        product = 0;
    }
    if (n<0){
        n = -n;
    }
    while (n > 0){
        product = product * (n % 10);
        n = n/10;
    }
    cout << "Product of digits: " << product << endl;

    return 0;
}