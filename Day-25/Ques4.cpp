#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of words : ";
    cin >> n;
    cin.ignore(); 

    char words[100][50];

    cout << "Enter " << n << " words:" << endl ;
    for(int i = 0; i < n; i++) {
        cin.getline(words[i], 50);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            
            int len1 = 0;
            while (words[j][len1] != '\0'){
                len1++;
            }

            int len2 = 0;
            while(words[j + 1][len2] != '\0'){
                len2++;
            }

            if(len1 > len2){
                for(int m = 0; m < 50; m++){
                    char temp = words[j][m];
                    words[j][m] = words[j + 1][m];
                    words[j + 1][m] = temp;
                }
            }
        }
    }

    cout << "\nWords sorted by length : " << endl ;
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl ;
    }
    return 0;
}
