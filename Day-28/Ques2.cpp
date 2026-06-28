#include <iostream>
using namespace std;

int main(){
    int accNo[50], n = 0, choice;
    string name[50];
    float balance[50];

    do{
        cout << "\nBank Menu :\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Account Number : ";
            cin >> accNo[n];

            cout << "Enter Account Holder Name : ";
            cin >> ws;
            getline(cin, name[n]);

            cout << "Enter Balance : ";
            cin >> balance[n];

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nAccount Number : " << accNo[i];
                cout << "\nName : " << name[i];
                cout << "\nBalance : " << balance[i] << endl;
            }
        }
    } while(choice != 3);
    return 0;
}