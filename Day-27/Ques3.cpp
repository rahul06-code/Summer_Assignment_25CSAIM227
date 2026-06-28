#include <iostream>
using namespace std;

int main(){
    int empId[50], n = 0, choice;
    string name[50];
    float salary[50];

    do {
        cout << "\nSalary Management Menu:\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Salary\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Employee ID : ";
            cin >> empId[n];

            cout << "Enter Employee Name : ";
            cin >> ws;
            getline(cin, name[n]);

            cout << "Enter Salary : ";
            cin >> salary[n];

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nEmployee ID : " << empId[i];
                cout << "\nName : " << name[i];
                cout << "\nSalary : " << salary[i] << endl;
            }
        }
    } while(choice != 3);
    return 0;
}