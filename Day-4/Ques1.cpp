#include<iostream>
using namespace std;

int main() {
    int n ,i = 1;
    cout<< "Enter Number: ";
    cin>> n;
    int a = 0;
    int b = 1;
    int c;
    cout << " The Fibonacci Series is : ";
    while(i <=n){
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
        i++;
    }
    cout << endl;

    return 0;
}
