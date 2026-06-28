#include <iostream>
using namespace std;

int main(){
    int bookId[50], n = 0, choice;
    string bookName[50], author[50];

    do{
        cout << "\nLibrary Menu : \n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter Book ID : ";
            cin >> bookId[n];

            cout << "Enter Book Name : ";
            cin >> ws;
            getline(cin, bookName[n]);

            cout << "Enter Author Name : ";
            getline(cin, author[n]);

            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++){
                cout << "\nBook ID : " << bookId[i];
                cout << "\nBook Name : " << bookName[i];
                cout << "\nAuthor : " << author[i] << endl;
            }
        }
    } while(choice != 3);
    return 0;
}