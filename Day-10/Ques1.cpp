#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;    

    while (i <= n){
        int space = 1;
        while (space <= n - i){
            cout << " " ;
            space++;
        }
        int j = 1;
        while (j <= (2 * i - 1)){
            cout << "*" ;
            j++;
        }
        cout << endl ; 
        i++;          
    }
    return 0;
}