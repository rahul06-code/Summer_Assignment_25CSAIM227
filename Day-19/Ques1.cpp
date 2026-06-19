#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of columns : ";
    cin >> col;

    int M1[100][100], M2[100][100], SumMatrix[100][100];

    cout << endl << "Enter elements for Matrix 1 : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "] : " ;
            cin >> M1[i][j];
        }
    }

    cout << endl << "Enter elements for Matrix 2 : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "] : " ;
            cin >> M2[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            SumMatrix[i][j] = M1[i][j] + M2[i][j] ;
        }
    }

    cout << endl << "The Sum Matrix is : " << endl ;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << SumMatrix[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
