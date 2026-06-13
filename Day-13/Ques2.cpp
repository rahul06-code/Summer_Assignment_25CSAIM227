#include <iostream>
using namespace std;

int main(){
    
    int arr[100];
    int size, sum = 0;
    int avg;
    
    cout << "Enter size of array : ";
    cin >> size;
    
    cout << "Enter array element : " << endl ;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    cout << "Sum is : " << sum << endl;
    
    for(int i = 0; i < size; i++){
        avg = sum / size;
    }
    cout << "Avg is : " << avg << endl;
    return 0;

}