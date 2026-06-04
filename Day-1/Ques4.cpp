#include <iostream>
using namespace std;

int main() {
    int n ; 
    cout << "Enter Number : ";
    cin >> n;
    int count = 0;
    int original_num = n;

    if ( n == 0){
        count = 1;
    } else {
        if (n<0){
            n = - n ;
        }
        while(n > 0) {
            n = n/10;
            count++;
        }
    }
    cout << "Number of digits " << original_num << " : " << count << endl;

    return 0;
}