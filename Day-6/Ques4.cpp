#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout << "Enter Number : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;
    int i = 1, ans = 1;

    while(i <= b){
        ans = ans * a;
        i++;

    }
    cout << ans << endl;
    
    return 0 ;
}