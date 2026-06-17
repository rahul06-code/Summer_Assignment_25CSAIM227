#include <iostream> 
using namespace std; 

int main(){ 
    int arr1[10] ; 
    int arr2[10] ; 
    int n1, n2; 

    cout << "Enter size of first array : "; 
    cin >> n1; 

    cout << "Enter size of second array : " ; 
    cin >> n2; 

    cout << "Enter first array elements : " << endl ; 
    for(int i = 0; i < n1; i++) { 
        cin >> arr1[i] ; 
    } 

    cout << "Enter second array elements : " << endl ; 
    for(int i = 0; i < n2; i++) { 
        cin >> arr2[i] ; 
    } 

    int Mergesize = n1 + n2 ;
    int Mergearr[20] ; 

    for(int i = 0; i < n1; i++){ 
        Mergearr[i] = arr1[i]; 
    } 

    for(int i = 0; i < n2; i++){ 
        Mergearr[n1 + i] = arr2[i]; 
    } 

    cout << "Merged array elements are : " << endl ;
    for(int i = 0; i < Mergesize; i++){ 
        cout << Mergearr[i] << " " ; 
    } 
    cout << endl ;
    return 0; 
}
