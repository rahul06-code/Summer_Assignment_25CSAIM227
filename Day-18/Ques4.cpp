#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[10];
    cout << "Enter array size: ";
    cin >> n;
    int i;

    cout << "Enter array element: " << endl;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i = 0; i < n - 1; i++){
        int k = i;
        int j;
        for(j = i + 1; j < n; j++){
            if(arr[j] > arr[k]){
                k = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }

    cout << "Sorted array in descending order is: " << endl;
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
