#include <iostream>
using namespace std;

int main() {
    int pin = 1234, Enteredpin;
    int choice;
    float balance = 10000, amount;

    cout << "Enter ATM PIN : ";
    cin >> Enteredpin;

    if (Enteredpin == pin) {
        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Exit\n";
            cout << "Enter your choice : ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Current Balance : " << balance << endl;
                    break;

                case 2:
                    cout << "Enter deposit amount : ";
                    cin >> amount;
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                    cout << "Updated Balance: " << balance << endl;
                    break;

                case 3:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;

                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawal Successful! " << endl;
                        cout << "Remaining Balance : " << balance << endl;
                    } else {
                        cout << "Insufficient Balance! " << endl;
                    }
                    break;

                case 4:
                    cout << "Thank you for using the ATM! " << endl;
                    break;

                default:
                    cout << "Invalid Choice! Please try again " << endl;
            }

        } while (choice != 4);

    } else {
        cout << "Incorrect PIN! Access Denied " << endl;
    }

    return 0;
}