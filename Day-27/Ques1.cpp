#include <iostream>
using namespace std;

int main(){
    int roll[10], n, search, i;
    string name[10];
    float marks[10];
    int choice;

    cout << "Enter number of students : ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "\nEnter detail of Student " << i + 1 << endl;
        cout << "Roll No : ";
        cin >> roll[i];

        cout << "Name : ";
        cin >> name[i];

        cout << "Marks : ";
        cin >> marks[i];
    }
    
    do{
        cout << "\n------ Student Record Management ------";
        cout << "\n1. Display All Students ";
        cout << "\n2. Search Student ";
        cout << "\n3. Exit ";
        cout << "\nEnter your choice : ";
        cin >> choice;

        if(choice == 1){
            cout << "\nStudent Records\n";
            for(i = 0; i < n; i++){
                cout << "\nRoll No : " << roll[i];
                cout << "\nName    : " << name[i];
                cout << "\nMarks   : " << marks[i] << endl;
            }
        } else if(choice == 2){
            cout << "Enter Roll Number to search : ";
            cin >> search;

            bool found = false;

            for(i = 0; i < n; i++){
                if(roll[i] == search){
                    cout << "\nStudent Found ";
                    cout << "\nRoll No : " << roll[i];
                    cout << "\nName    : " << name[i];
                    cout << "\nMarks   : " << marks[i] << endl;
                    found = true;
                }
            }
            if(found == false){
                cout << "Student not found " << endl;
            }
        } else if(choice == 3){
            cout << "Thank You " << endl;
        } else{
            cout << "Invalid Choice " << endl;
        }
    }while(choice != 3);
    return 0;
}