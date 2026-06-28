#include <iostream>
using namespace std;

int main(){
    int ticketNo[50], n = 0, choice;
    string passenger[50], destination[50];

    do{
        cout << "\nTicket Booking Menu:\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter Ticket Number : ";
            cin >> ticketNo[n];

            cout << "Enter Passenger Name : ";
            cin >> ws;
            getline(cin, passenger[n]);

            cout << "Enter Destination : ";
            getline(cin, destination[n]);
            n++;
        }else if(choice == 2) {
            for(int i = 0; i < n; i++) {
                cout << "\nTicket Number : " << ticketNo[i];
                cout << "\nPassenger Name : " << passenger[i];
                cout << "\nDestination : " << destination[i] << endl;
            }
        }
    } while(choice != 3);
    return 0;
}