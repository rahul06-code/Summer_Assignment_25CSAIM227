#include <iostream> 
using namespace std; 

int main() { 
    int arr[10]; 
    int size; 

    cout << "Enter size of array: "; 
    cin >> size; 

    cout << "Enter array elements : " << endl; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i] ; 
    } 

    int count = 0 ; 

    for(int i = 0; i < size; i++) { 
        if(arr[i] != 0) { 
            int temp = arr[i] ; 
            arr[i] = arr[count] ; 
            arr[count] = temp ; 
            count++ ; 
        } 
    } 
    cout << "Array after moving zeroes to end: " ; 
    for(int i = 0; i < size; i++){ 
        cout << arr[i] << " " ; 
    } 
    cout << endl ; 
    return 0 ; 
}
