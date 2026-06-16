#include <iostream> 
using namespace std; 

int main() { 
    int arr[10] ; 
    int size ; 
    int targetSum ; 

    cout << "Enter size of array : " ; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i] ; 
    } 

    cout << "Enter the target sum : " ; 
    cin >> targetSum ; 

    for(int i = 0; i < size; i++) { 
        for(int j = i + 1; j < size; j++) { 
            if(arr[i] + arr[j] == targetSum) { 
                cout << "Pair found : (" << arr[i] << ", " << arr[j] << ")" << endl; 
                return 0 ; 
            } 
        } 
    } 
    cout << " No pair found " << endl ; 
    return 0; 
}
