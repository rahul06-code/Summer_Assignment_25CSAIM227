#include <iostream>
using namespace std;

int main(){
    int phone[50], n = 0, choice;
    string name[50], email[50];

    do{
        cout << "\nContact Management Menu :\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter Phone Number : ";
            cin >> phone[n];

            cout << "Enter Name : ";
            cin >> ws;
            getline(cin, name[n]);

            cout << "Enter Email : ";
            getline(cin, email[n]);

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nPhone Number : " << phone[i];
                cout << "\nName : " << name[i];
                cout << "\nEmail : " << email[i] << endl;
            }
        }

    } while(choice != 3);
    return 0;
}