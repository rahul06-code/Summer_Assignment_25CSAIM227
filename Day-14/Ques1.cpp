#include <iostream> 
using namespace std; 

int main(){ 
    int arr[10]; 
    int size ; 
    int key ; 
    int index = -1; 
    cout << "Enter size of array : " ; 
    cin >> size ; 

    cout << "Enter array elements : " << endl ; 
    for(int i = 0; i < size; i++){ 
        cin >> arr[i] ; 
    } 

    cout << "Enter element to search: "; 
    cin >> key ; 

    for(int i = 0; i < size; i++){ 
        if(arr[i] == key) { 
            index = i; 
            break; 
        } 
    } 
    if(index != -1){ 
        cout << "Element found at index: " << index << endl ; 
    } else { 
        cout << "Element not found " << endl; 
    } 
    return 0; 
}
