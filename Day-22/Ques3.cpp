#include <iostream>
using namespace std;

int main() {
    char str[100]; 

    cout << "Enter a string : ";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++){
        int count = 1;
        bool Alreadycounted = 0;

        for (int j = 0; j < i; j++){
            if (str[i] == str[j]) {
                Alreadycounted = 1;
                break;
            }
        }

        if (Alreadycounted){
            continue;
        }
        
        for (int j = i + 1; str[j] != '\0'; j++){
            if (str[i] == str[j]){
                count++;
            }
        }

        cout << "'" << str[i] << "' appears " << count << " times " << endl ; 
    }

    return 0;
}
