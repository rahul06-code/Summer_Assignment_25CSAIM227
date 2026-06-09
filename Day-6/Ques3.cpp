#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;
    
    int count = 0;
    int original_num = n;

    while(n > 0){
        if(n % 2 == 1){
            count++;
        }
        n = n / 2;
    }
    cout << "Total bits are " << count <<  endl;
    return 0;
}