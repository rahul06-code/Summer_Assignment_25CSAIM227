#include<iostream>
using namespace std;

int main() {
    int n ,i, sum = 0;
    cout << "Enter Number : ";
    cin >> n;

    for (i =1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

if (sum == n && n > 0){
    cout << n << " is a perfect Number " << endl;
} else {
    cout << n << " is not a perfect Number " << endl;
}
    return 0;
}