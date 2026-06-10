#include <iostream>
using namespace std;

int reversenum(int n , int rev = 0){

if(n == 0){
    return rev;
}
return reversenum(n / 10, rev * 10 + (n % 10));
}
int main(){
    int num ;

    cout << "Enter a positive number: ";
    cin >> num ;

    cout << "Original number : " << num << endl;
    cout << "Reversed number: " << reversenum(num) << endl;

    return 0;
}