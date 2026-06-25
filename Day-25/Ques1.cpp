#include<iostream>
using namespace std;

int main(){
    int n1, n2, i;
    int arr1[10], arr2[10];
    
    cout << "Enter size of array 1 : ";
    cin >> n1;
    cout << "Enter size of array 2 : ";
    cin >> n2;

    cout << "Enter elements of first array : ";
    for(i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    
    cout << "Enter elements of second array : ";
    for(i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int Mergesize = n1 + n2;
    int Mergearr[20];

    int j = 0, k = 0, m = 0;

    while(j < n1 && k < n2){
        if(arr1[j] < arr2[k]) {
            Mergearr[m] = arr1[j];
            j++;
        }else{
            Mergearr[m] = arr2[k];
            k++;
        }
        m++;
    }
    while(j < n1){
        Mergearr[m] = arr1[j];
        j++;
        m++;
    }
    while(k < n2){
        Mergearr[m] = arr2[k];
        k++;
        m++;
    }

    cout << "Merged sorted array elements are : " << endl ;
    for(i = 0; i < Mergesize; i++){
        cout << Mergearr[i] << " ";
    }
    cout << endl;
    return 0;
}
