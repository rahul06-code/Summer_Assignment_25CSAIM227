#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1, space = 1;
        while(space <= n - i){
            cout << " ";
            space = space + 1;
        }
        while(j <= i){
            cout << j << " ";
            j++;
        }
        j = i -1;
        while(j >= 1){
            cout << j << " ";
            j--;
        }
        i++;
        cout << endl ;
    }
    return 0;
}