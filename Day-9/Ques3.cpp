#include<iostream>
using namespace std;

int main(){

    int n, i =1;
    cout << "Enter Number: ";
    cin >> n;
    char ch ='A' ;
    
    while(i<=n){
        int j =1;
        while(j<= i){
            cout << ch ;
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }
    return 0;
}