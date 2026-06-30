#include <iostream>
using namespace std;

int main() {
    int rollNo[50], n = 0, choice;
    string name[50];

    do {
        cout << "\nStudent Record Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Roll Number : ";
            cin >> rollNo[n];

            cout << "Enter Student Name : ";
            cin >> ws;
            getline(cin, name[n]);

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nRoll Number : " << rollNo[i];
                cout << "\nStudent Name : " << name[i] << endl;
            }
        }else if(choice == 3) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 3);
    return 0;
}