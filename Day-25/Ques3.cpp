#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of names : ";
    cin >> n;
    cin.ignore(); 
    char names[100][50];

    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        cin.getline(names[i], 50);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            
            int k = 0;
            while(names[j][k] != '\0' && names[j + 1][k] != '\0' && names[j][k] == names[j + 1][k]) {
                k++;
            }

            if(names[j][k] > names[j + 1][k]){

                for(int m = 0; m < 50; m++){
                    char temp = names[j][m];
                    names[j][m] = names[j + 1][m];
                    names[j + 1][m] = temp;
                }
            }
        }
    }

    cout << "\nNames in alphabetical order :" << endl ;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl ;
    }
    return 0;
}
