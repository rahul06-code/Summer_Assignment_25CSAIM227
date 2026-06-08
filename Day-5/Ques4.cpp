#include <iostream>
using namespace std;

int main() {
    int n , i = 2;
    cout << "Enter a number: ";
    cin >> n;
int largest_factor = 0;

while(n > 1){
    if (n % i == 0){
        largest_factor = i;
        n = n / i;
    } else {
        i++;
    }
}
cout << "The largest prime factor is: " << largest_factor << endl;
return 0;
}