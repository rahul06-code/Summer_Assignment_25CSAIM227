#include <iostream> 
using namespace std; 

int main() { 
    int arr[100]; 
    int size; 
    int Evencount = 0; 
    int oddCount = 0; 

    cout << "Enter size of array : " ; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i]; 
    } 

    for(int i = 0; i < size; i++) { 
        if(arr[i] % 2 == 0) { 
            Evencount++; 
        } else { 
            oddCount++; 
        } 
    } 
    cout << "Total even elements: " << Evencount << endl ; 
    cout << "Total odd elements: " << oddCount << endl ; 

    return 0; 
}
