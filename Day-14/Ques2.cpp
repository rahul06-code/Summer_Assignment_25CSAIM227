#include <iostream> 
using namespace std; 

int main() { 
    int arr[10]; 
    int size ; 
    int key ; 
    int count = 0 ; 
    cout << "Enter size of array : " ; 
    cin >> size; 

    cout << " Enter array elements : " << endl ; 
    for(int i = 0; i < size; i++){ 
        cin >> arr[i] ; 
    } 
    cout << " Enter element to find frequency: "; 
    cin >> key ; 

    for(int i = 0; i < size; i++) { 
        if(arr[i] == key){ 
            count++ ; 
        } 
    } 
    cout << "Frequency of " << key << " is: " << count << endl ; 
    return 0; 
}
