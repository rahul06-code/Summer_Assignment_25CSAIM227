#include <iostream>
using namespace std;

int main(){
    int id[10], n, choice, search, i;
    string name[10], department[10];
    float salary[10];

    cout << "Enter number of employees : ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID : ";
        cin >> id[i];

        cout << "Name : ";
        cin >> name[i];

        cout << "Department : ";
        cin >> department[i];

        cout << "Salary : ";
        cin >> salary[i];
    }
    do{
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Display All Employees ";
        cout << "\n2. Search Employee ";
        cout << "\n3. Exit ";
        cout << "\nEnter your choice : ";
        cin >> choice;

        if(choice == 1){
            cout << "\nEmployee Details\n";

            for(i = 0; i < n; i++){
                cout << "\nEmployee ID : " << id[i];
                cout << "\nName        : " << name[i];
                cout << "\nDepartment  : " << department[i];
                cout << "\nSalary      : " << salary[i] << endl;
            }
        }
        else if(choice == 2){
            cout << "Enter Employee ID : ";
            cin >> search;

            bool found = false;

            for(i = 0; i < n; i++){
                if(id[i] == search){
                    cout << "\nEmployee Found ";
                    cout << "\nEmployee ID : " << id[i];
                    cout << "\nName        : " << name[i];
                    cout << "\nDepartment  : " << department[i];
                    cout << "\nSalary      : " << salary[i] << endl;

                    found = true;
                }
            }

            if(found == false){
                cout << "Employee not found " << endl;
            }
        }else if(choice == 3){
            cout << "Program Ended " << endl;
        }else{
            cout << "Invalid Choice " << endl;
        }

    } while(choice != 3);
    return 0;
}