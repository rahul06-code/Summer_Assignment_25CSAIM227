#include <iostream>
using namespace std;

int main(){
    int roll[10], n, choice, search, i;
    string name[10];
    float m1[10], m2[10], m3[10], total[10], percentage[10];

    cout << "Enter number of students : ";
    cin >> n;

    for(i = 0; i < n; i++){
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number : ";
        cin >> roll[i];

        cout << "Name : ";
        cin >> name[i];

        cout << "Marks in Subject 1 : ";
        cin >> m1[i];

        cout << "Marks in Subject 2 : ";
        cin >> m2[i];

        cout << "Marks in Subject 3 : ";
        cin >> m3[i];

        total[i] = m1[i] + m2[i] + m3[i];
        percentage[i] = total[i] / 3;
    }
    do{
        cout << "\n===== Marksheet Generation System ===== ";
        cout << "\n1. Display All Marksheets ";
        cout << "\n2. Search Student ";
        cout << "\n3. Exit ";
        cout << "\nEnter your choice : ";
        cin >> choice;

        if(choice == 1){
            for(i = 0; i < n; i++){
                cout << "\n----------------------------";
                cout << "\nRoll Number : " << roll[i];
                cout << "\nName        : " << name[i];
                cout << "\nSubject 1   : " << m1[i];
                cout << "\nSubject 2   : " << m2[i];
                cout << "\nSubject 3   : " << m3[i];
                cout << "\nTotal Marks : " << total[i];
                cout << "\nPercentage  : " << percentage[i] << "%";

                if(percentage[i] >= 40)
                    cout << "\nResult      : Pass";
                else
                    cout << "\nResult      : Fail";

                cout << endl;
            }
        }else if(choice == 2){
            cout << "Enter Roll Number : ";
            cin >> search;

            bool found = false;

            for(i = 0; i < n; i++){
                if(roll[i] == search){
                    cout << "\nStudent Found ";
                    cout << "\nName        : " << name[i];
                    cout << "\nTotal Marks : " << total[i];
                    cout << "\nPercentage  : " << percentage[i] << "%";

                    if(percentage[i] >= 40)
                        cout << "\nResult      : Pass";
                    else
                        cout << "\nResult      : Fail";
                    cout << endl;
                    found = true;
                }
            }
            if(found == false){
                cout << "Student not found " << endl;
            }
            
        }else if(choice == 3){
            cout << "Thank You " << endl;
        } else{
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 3);

    return 0;
}