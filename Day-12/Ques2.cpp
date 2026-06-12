#include <iostream>
using namespace std;

bool Isarmstrong(int num){
    
    int originalnum = num ;
    int temp = num ;
    int digits = 0 ;
    int sum = 0 ;
    
    if (num < 0) 
        return 0;

// Total no of digits
    while (temp > 0){
        digits++ ;
        temp = temp / 10 ;
    }

    while (num > 0) {

        int power = 1;
        int lastdigit = num % 10;
        
        for (int i = 0; i < digits; i++) {
            power = power * lastdigit;
        }
        sum = sum + power;
        num = num / 10;
    }
    return originalnum == sum ;
}

int main() {
    
    int N ;
    cout << "Enter number: " ;
    cin >> N;

    if (Isarmstrong(N)) {
        cout << N << " is Armstrong number " << endl ;
    } else {
        cout << N << " is not Armstrong number " << endl;
    }
    return 0;
}
