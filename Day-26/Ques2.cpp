#include <iostream>

using namespace std;

int main() {
    const int Voting_Age = 18;
    int Age = 0;

    cout << " VOTING ELIGIBILITY SYSTEM " << endl;

    cout << "Please enter your age : ";
    cin >> Age;

    if(Age < 0 || Age > 120){
        cout << "\nError: Invalid age entered. Please enter a valid number between 0 and 120 " << endl;
    } 
    else if(Age >= Voting_Age){
        cout << "\nStatus : ELIGIBLE" << endl;
        cout << "Success : You are old enough to vote! Please ensure you are registered " << endl;
    } 
    else{
        int Yearsleft = Voting_Age - Age;
        cout << "\nStatus : NOT ELIGIBLE" << endl;
        cout << "Notice : You are too young to vote " << endl;
        cout << "You will become eligible in " << Yearsleft << " year " << endl;
    }

    return 0;
}
