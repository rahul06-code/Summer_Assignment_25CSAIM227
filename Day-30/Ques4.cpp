#include <iostream>
using namespace std;

int rollNo[50], n = 0;
string name[50];

void addStudent() {
    cout << "Enter Roll Number: ";
    cin >> rollNo[n];

    cout << "Enter Student Name: ";
    cin >> ws;
    getline(cin, name[n]);

    n++;
}

void displayStudent(){
    if(n == 0){
        cout << "No Student Record Found.\n";
    }else {
        for(int i = 0; i < n; i++) {
            cout << "\nRoll Number: " << rollNo[i];
            cout << "\nStudent Name: " << name[i] << endl;
        }
    }
}

int main() {
    int choice;

    do {
        cout << "\nMini Project Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1) {

            addStudent();

        }else if(choice == 2) {

            displayStudent();

        }else if(choice == 3) {

            cout << "Thank You" << endl;
            
        }else {
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}