#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= (2 * n - 1)) {
            if (j >= i && j <= (2 * n - i)){
                cout << "*" ;
            } else {
                cout << " " ;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}