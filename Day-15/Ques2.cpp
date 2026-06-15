#include <iostream> 
using namespace std; 

int main() { 
    int arr[10]; 
    int size; 

    cout << "Enter size of array : " ; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++){ 
        cin >> arr[i] ; 
    } 

    int first = arr[0] ;  
    for(int i = 0; i < size - 1; i++){ 
        arr[i] = arr[i + 1] ; 
    } 
    arr[size - 1] = first ; 

    cout << "Left rotated array: " ; 
    for(int i = 0; i < size; i++){ 
        cout << arr[i] << " " ; 
    } 
    cout << endl ; 
    return 0 ; 
}
