#include<iostream>
using namespace std;

int main() {
    int n;
    int arr[10];
    cout << "Enter array size: ";
    cin >> n;
    int i;

    cout << "Enter array element: " << endl;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i = 0; i < n - 1; i++) {
        int j;

        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]){

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is : " << endl ;
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
