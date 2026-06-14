#include <iostream> 
using namespace std; 

int main() { 
    int arr[10] ; 
    int size ; 
    int Duplicates = 0 ; 

    cout << "Enter size of array : " ; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++){ 
        cin >> arr[i]; 
    } 

    cout << "Duplicate elements are: " ; 
    for(int i = 0; i < size; i++) { 
        for(int j = i + 1; j < size; j++) { 
            if(arr[i] == arr[j]) { 
                cout << arr[i] << " " ; 
                Duplicates = 1 ; 
                break ; 
            } 
        } 
    } 

    if(Duplicates == 0) { 
        cout << "None" ; 
    } 
    cout << endl; 
    return 0; 
}
