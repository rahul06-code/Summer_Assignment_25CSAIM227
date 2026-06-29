#include <iostream>
using namespace std;

int main() {
    string str;
    int choice;

    do {
        cout << "\nString Operations Menu :\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter String : ";
            cin >> ws;
            getline(cin, str);
        }else if(choice == 2) {
            cout << "String : " << str << endl;
        }else if(choice == 3) {
            cout << "Length = " << str.length() << endl;
        }else if(choice == 4) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 4);
    return 0;
}