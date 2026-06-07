#include<iostream>
using namespace std;

int main() {
    int n =1,i = 3;
    cout<< "Enter Number: ";
    cin>> n;
    int a = 0;
    int b = 1;
    int c = 0;

    if(n == 1){
    cout << a << endl;

    } else if (n == 2){

        cout << b << endl;

    }else {
        
    while(i <= n){
        
        c = a + b;
        a = b;
        b = c;
        i++;
      }
      cout << "The Nth Fibonacci Term is  :" << b << endl ;
    }

    return 0;
}
