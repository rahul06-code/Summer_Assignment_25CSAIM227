#include <iostream>
using namespace std;

int main(){
    int row, col;

    cout << "Enter number of row : " ;
    cin >> row;
    cout << "Enter number of columns : " ;
    cin >> col;

    int matrix[100][100], transpose[100][100] ;

    cout << endl << "Enter elements of Matrix : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "] : " ;
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << endl << "The transpose matrix is : " << endl ;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << transpose[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
