#include <iostream>
using namespace std;

int main(){
    int row, col;
    int i, j;

    cout << "Enter number of row : " ;
    cin >> row;
    cout << "Enter number of columns : " ;
    cin >> col;
    
    int matrix[100][100];
    
    if (row != col) {
        cout << "Given Matrix is not Symmetric Matrix" << endl;
        return 0;
    }

    
    cout << endl << "Enter elements of Matrix : " << endl ;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            cout << "Element [" << i << "][" << j << "] : " ;
            cin >> matrix[i][j];
        }
    }

    bool isSymmetric = 1;

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric != 1){
            break;
        }
    }
    
    if(isSymmetric == 1){
        cout << "given matrix is symmetric matrix" << endl;
    } else {
        cout << "given matrix is not symmetric matrix" << endl;
    }
    return 0;

}