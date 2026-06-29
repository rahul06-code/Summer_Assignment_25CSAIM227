#include <iostream>
using namespace std;

int main() {
    int itemId[50], quantity[50], n = 0, choice;
    string itemName[50];

    do {
        cout << "\nInventory Management Menu :\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Item ID : ";
            cin >> itemId[n];

            cout << "Enter Item Name: ";
            cin >> ws;
            getline(cin, itemName[n]);

            cout << "Enter Quantity: ";
            cin >> quantity[n];

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nItem ID : " << itemId[i];
                cout << "\nItem Name : " << itemName[i];
                cout << "\nQuantity : " << quantity[i] << endl;
            }
        }else if(choice == 3) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 3);
    return 0;
}