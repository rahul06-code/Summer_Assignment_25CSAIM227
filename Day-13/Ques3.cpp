#include <iostream>
using namespace std;

int main(){
    
    int arr[100];
    int size;
    
    cout << "Enter size of array : ";
    cin >> size;
    
    cout << "Enter array elements : " << endl ;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element : " << largest << endl ;
    
    int smallest = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest element : " << smallest << endl ;
    
    return 0;
}