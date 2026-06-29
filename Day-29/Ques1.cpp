#include <iostream>
using namespace std;

int main(){
    int choice;
    float num1, num2, result;

    do{
        cout << "\nCalculator Menu :\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter two numbers : ";
            cin >> num1 >> num2;
        }
        if(choice == 1) {
            result = num1 + num2;
            cout << "Result = " << result << endl;
        }else if(choice == 2) {
            result = num1 - num2;
            cout << "Result = " << result << endl;
        }else if(choice == 3) {
            result = num1 * num2;
            cout << "Result = " << result << endl;
        }else if(choice == 4) {
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            }else {
                cout << "Division by zero is not possible " << endl;
            }
        }else if(choice == 5) {
            cout << "Thank You " << endl;
        }else {
            cout << "Invalid Choice " << endl;
        }
    } while(choice != 5);
    return 0;
}