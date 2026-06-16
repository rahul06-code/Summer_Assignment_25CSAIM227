#include <iostream> 
using namespace std; 

int main() { 
    int arr[10] ; 
    int size ; 

    cout << "Enter size of array : " ; 
    cin >> size ; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i] ; 
    } 

    int Uniquesize = 0 ;

    for(int i = 0; i < size; i++) { 
        int duplicate = 0 ;
        for(int j = 0; j < Uniquesize; j++) { 
            if(arr[i] == arr[j]) { 
                duplicate = 1 ; 
                break ; 
            } 
        } 
        if(duplicate == 0) { 
            arr[Uniquesize] = arr[i] ; 
            Uniquesize++ ; 
        } 
    } 

    size = Uniquesize ; 

    cout << "Array after removing duplicates : " ; 
    for(int i = 0; i < size; i++) { 
        cout << arr[i] << " " ; 
    } 
    cout << endl ; 
    return 0; 
}
