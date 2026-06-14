#include <iostream> 
using namespace std; 

int main(){ 
    int arr[10] ; 
    int size ; 
    cout << "Enter size of array (max 10): "; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i] ; 
    } 
    int largest = arr[0];
    int Secondlargest = -1; 

    for(int i = 1; i < size; i++){ 
        if(arr[i] > largest) { 
            Secondlargest = largest ; 
            largest = arr[i] ; 
        } else if(arr[i] > Secondlargest && arr[i] != largest){ 
            Secondlargest = arr[i] ; 
        } 
    } 
    if(Secondlargest == -1){
        cout << "No second largest element exists" << endl ;
    } else {
        cout << "Second largest element is: " << Secondlargest << endl ; 
    }
    return 0; 
}
