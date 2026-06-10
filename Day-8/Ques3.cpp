#include<iostream>
using namespace std;

int main(){

    int n, i =1;
    cout << "Enter Number: ";
    cin >> n;

    while(i<=n){
        int j =1;
        char ch ='A' ;
        while(j<= i){
            cout << ch ;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}