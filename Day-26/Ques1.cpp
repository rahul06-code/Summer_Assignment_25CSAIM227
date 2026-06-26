  #include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    
    int randomNum = (rand() % 100) + 1;
    int userGuess = 0;
    int attemptCount = 0;

    cout << " Welcome to the Number Guessing Game! " << endl;
    cout << "I have selected a secret number between 1 and 100 " << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "\nEnter your guess : ";
        cin >> userGuess;
        attemptCount++;

        if(userGuess > randomNum) {
            cout << "Too high ! Try a lower number.";
        }else if(userGuess < randomNum){
            cout << "Too low ! Try a higher number.";
        }else{
            cout << "\nCongratulations! You found the secret number! " << endl;
            cout << "It took you " << attemptCount << " attempts to win " << endl;
        }

    } while(userGuess != randomNum);

    cout << "Thank you for playing! " << endl;
    return 0;
}
