#include <iostream>
using namespace std;

int main() {
    int empId[50], n = 0, choice;
    string empName[50], company[50];

    do {
        cout << "\nMini Employee Management Menu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Employee ID: ";
            cin >> empId[n];

            cout << "Enter Employee Name: ";
            cin >> ws;
            getline(cin, empName[n]);

            cout << "Enter Company Name: ";
            getline(cin, company[n]);

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++){
                cout << "\nEmployee ID: " << empId[i];
                cout << "\nEmployee Name: " << empName[i];
                cout << "\nCompany: " << company[i] << endl;
            }
        }else if(choice == 3) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 3);
    return 0;
}