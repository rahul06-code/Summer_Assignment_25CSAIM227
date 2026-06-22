#include <iostream>
using namespace std;

int main() {
    char str[100];
    
    cout << "Enter a string with spaces: ";
    cin.getline(str, 100);

    int uniqueIndex = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[uniqueIndex] = str[i];
            uniqueIndex++;
        }
    }
    
    str[uniqueIndex] = '\0';

    cout << "String after removing spaces: " << str << endl;

    return 0;
}
