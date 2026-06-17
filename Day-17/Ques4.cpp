#include <iostream> 
using namespace std; 

int main() { 
    int arr1[10]; 
    int arr2[10]; 
    int n1, n2; 

    cout << "Enter size of first array : " ; 
    cin >> n1; 

    cout << "Enter size of second array : " ; 
    cin >> n2; 

    cout << "Enter first array elements : " << endl ; 
    for(int i = 0; i < n1; i++){ 
        cin >> arr1[i]; 
    } 

    cout << "Enter second array elements : " << endl ; 
    for(int i = 0; i < n2; i++){ 
        cin >> arr2[i]; 
    } 

    cout << "Intersection of arrays is : " << endl; 

    for(int i = 0; i < n1; i++){ 

        bool isCommon = false; 
        for(int j = 0; j < n2; j++){ 
            if(arr1[i] == arr2[j]) { 
                isCommon = true ; 
                break ; 
            } 
        } 

        if(isCommon) { 
            bool alreadyPrinted = false ; 

            for(int k = 0; k < i; k++) { 
                if(arr1[i] == arr1[k]){ 
                    alreadyPrinted = true ; 
                    break; 
                } 
            } 

            if(alreadyPrinted == false){ 
                
                cout << arr1[i] << " " ; 
            } 
        } 
    } 
    cout << endl ; 
    return 0 ; 
}
