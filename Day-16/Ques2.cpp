#include <iostream> 
using namespace std; 

int main() { 
    int arr[10]; 
    int size; 

    cout << "Enter size of array : "; 
    cin >> size; 

    cout << "Enter array elements: " << endl ; 
    for(int i = 0; i < size; i++) { 
        cin >> arr[i] ; 
    } 

    int Maxelement = arr[0] ;
    int Maxcount = 0 ;

    for(int i = 0; i < size; i++) { 
        int count = 0;
        for(int j = 0; j < size; j++) { 
            if(arr[i] == arr[j]) { 
                count++ ;
            }
        }
        if(count > Maxcount) { 
            Maxcount = count ;
            Maxelement = arr[i] ;
        }
    } 
    cout << "element with maximum frequency : " << Maxelement << endl; 
    cout << "its frequency : " << Maxcount << endl; 
    return 0; 
}
