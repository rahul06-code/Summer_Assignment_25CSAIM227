#include<iostream>
using namespace std;

int main() {
    int n,i ,total_sum = 0;
    cout << "Enter Number : ";
    cin >> n;
int temp = n ;
int digit;

while(temp > 0){
    int fact = 1;
    digit = temp % 10;

    for ( i = 1; i <= digit ; i++){
        fact = fact * i;
    }
total_sum = total_sum + fact;
temp = temp / 10;
}
if ( total_sum == n){
    cout << n << " is a strong Number" << endl;
} else {
    cout << n << " is not a strong Number" << endl;

}
    return 0;
}