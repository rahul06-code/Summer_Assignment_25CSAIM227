#include <iostream>
using namespace std;

int main(){
    int row, col;

    cout << "Enter number of row : " ;
    cin >> row;
    cout << "Enter number of columns : " ;
    cin >> col;

    int matrix[100][100];

    cout << endl << "Enter elements of Matrix : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "] : " ;
            cin >> matrix[i][j];
        }
    }
    
    cout << "Row wise Sum : " << endl;
    for (int i = 0; i < row; i++) {
        int rowSum = 0;

        for (int j = 0; j < col; j++) {

            rowSum = matrix[i][j] + rowSum;
        }
        cout << "Sum of row " << i + 1 << " : " << rowSum << endl;
    }
    return 0;
}
