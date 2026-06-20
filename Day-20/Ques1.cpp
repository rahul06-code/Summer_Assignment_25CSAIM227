#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int i, j;

    cout << "Enter rows and column for matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter rows and column for matrix 2: ";
    cin >> r2 >> c2;

    if(c1 != r2){
        cout << "Matrix Multiplication Not possible ";
        return 1;
    }

    int M1[100][100], M2[100][100], MultiplyMatrix[100][100] = {0} ;

    cout << "Enter elements of matrix 1 : " <<  endl;
    
    for(i =0; i < r1; i++){
        for(j = 0; j < r2; j++){
            cout << "Element [" << i << "][" << j << "] :" ;
            cin >> M1[i][j];
        }
    }
    
    cout << "Enter elements of matrix 2 : " <<  endl;

    for(i =0; i < r1; i++){
        for(j = 0; j < r2; j++){
            cout << "Element [" << i << "][" << j << "] :" ;
            cin >> M2[i][j];
        }
    }

    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            for(int k = 0; k < c1; k++){
                MultiplyMatrix[i][j] = MultiplyMatrix[i][j] + M1[i][k] * M2[k][j];
            }
        }
    }

    cout << "Resultant Matrix : " << endl;
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            cout << MultiplyMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
  