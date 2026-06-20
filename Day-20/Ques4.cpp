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
    
    cout << "Column wise Sum : " << endl;
    for (int i = 0; i < col; i++) {
        int colSum = 0;

        for (int j = 0; j < row; j++) {

            colSum = matrix[j][i] + colSum;
        }
        cout << "Sum of column " << i + 1 << " : " << colSum << endl;
    }
    return 0;
}
