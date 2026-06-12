#include <iostream>
using namespace std;

bool isPerfect(int num) {

    int sum = 0 ;

    if (num <= 1)
    return 0 ;

    for (int i = 1; i < num; i++){
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    return sum == num ;
}

int main() {

    int N;
    cout << "Enter number: ";
    cin >> N;

    if (isPerfect(N)) {
        cout << N << " is perfect number " << endl ;
    } else {
        cout << N << " is not perfect number " << endl ;
    }
    return 0;
}
