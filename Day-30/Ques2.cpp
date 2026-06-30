#include <iostream>
using namespace std;

int main() {
    int bookId[50], n = 0, choice;
    string bookName[50];

    do {
        cout << "\nMini Library Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter Book ID: ";
            cin >> bookId[n];

            cout << "Enter Book Name : ";
            cin >> ws;
            getline(cin, bookName[n]);

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nBook ID : " << bookId[i];
                cout << "\nBook Name : " << bookName[i] << endl;
            }
        }else if(choice == 3) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }

    } while(choice != 3);
    return 0;
}