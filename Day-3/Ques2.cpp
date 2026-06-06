#include<iostream>
using namespace std;

int main() {
    int i , n ,InitialNum , FinalNum;
    cout << "Enter Initial Number : ";
    cin >> InitialNum;
    
    cout << "Enter Final Number : ";
    cin >> FinalNum;
    
    cout << "Prime Number Between " << InitialNum << " and " << FinalNum << " are: ";
    
    for(n = InitialNum ; n <= FinalNum; n++ ){
        if(n <=  1){
            continue;
        }
        bool isprime = 1;

    for(i=2; i<n; i++){
        if(n % i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1) {
        cout << n << " ";
    }
}
cout << endl;
return 0;
}