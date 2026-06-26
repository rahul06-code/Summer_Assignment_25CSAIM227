#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== QUIZ APPLICATION =====\n";

    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}