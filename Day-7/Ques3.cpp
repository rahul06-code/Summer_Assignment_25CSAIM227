#include <iostream>
using namespace std;
int sumofdigit(int n){
    if(n == 0){
        return 0;
    }
  return (n % 10) + sumofdigit(n / 10);
}
int main(){

    int num;
    cout << "Enter Number: ";
    cin >> num;

    cout << "The sum of digits in " << num << " is: ";
    cout << sumofdigit(num) << endl;

    return 0;
}
    