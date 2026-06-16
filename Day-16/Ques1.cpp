#include <iostream> 
using namespace std; 

int main(){ 
    int arr[10] ; 
    int size ; 

    cout << "Enter size of array : "; 
    cin >> size ; 

    cout << "Enter array elements : " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i]; 
    } 

    int n = size + 1 ;
    int expectedsum = (n * (n + 1)) / 2 ;
    int realsum = 0 ;

    for(int i = 0; i < size; i++) { 
        realsum = realsum +  arr[i] ; 
    } 

    int Missingnumber = expectedsum - realsum ;

    cout << "Missing number is : " << Missingnumber << endl; 
    return 0 ; 
}
