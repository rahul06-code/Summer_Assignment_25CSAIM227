#include <iostream>
using namespace std;

int main() {
    int a[50], n, choice;

    do {
        cout << "\nArray Operations Menu :\n";
        cout << "1. Enter Array Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Find Sum\n";
        cout << "4. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter number of elements : ";
            cin >> n;

            cout << "Enter array elements :\n";
            for(int i = 0; i < n; i++) {
                cin >> a[i];
            }
        }else if(choice == 2) {
            cout << "Array Elements : ";
            for(int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }else if(choice == 3) {
            int sum = 0;

            for(int i = 0; i < n; i++) {
                sum = sum + a[i];
            }
            cout << "Sum = " << sum << endl;
        }else if(choice == 4) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 4);
    return 0;
}