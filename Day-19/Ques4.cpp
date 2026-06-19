#include <iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter the size of the square Matrix : " ;
    cin >> size;

    int Matrix[100][100];
    int Primarysum = 0;
    int Secondarysum = 0;

    cout << endl << "Enter elements for Matrix :" << endl ;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Element [" << i << "][" << j << "] : ";
            cin >> Matrix[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        Primarysum = Primarysum + Matrix[i][i];
        Secondarysum = Secondarysum + Matrix[i][size - 1 - i];
    }

    cout << endl << "Sum of primary diagonal : " << Primarysum << endl ;
    cout << "Sum of secondary diagonal : " << Secondarysum << endl ;

    return 0;
}
