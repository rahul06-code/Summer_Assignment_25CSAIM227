#include <iostream>
using namespace std;

int main(){
    
    int arr[100];
    int size;
    
    cout << "Enter size : ";
    cin >> size;
    
    cout << "Enter array element : " << endl ;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Array are : " << endl ;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}