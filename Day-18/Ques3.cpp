#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[10];
    cout<< "Enter array Size : ";
    cin >> n;

    cout << "Enter sorted array elements : " << endl; 
    for(int i = 0; i <= n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter elementy to search : ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    int index = -1;

    
    while(low <= high){
        int mid = (low + mid) / 2;

        if(arr[mid] == key){
            index == mid;
        }else if(arr[mid] < key){
            low = mid + 1;
        } else{
             high = mid - 1; 
        }
    }
    if(index != -1){
        cout << "Element found at index : " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}