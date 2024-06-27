#include <iostream>

using namespace std;

int main()
{
    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3] = {{9,8,7}, {5,6,4}, {1,2,3}};

    int C[3][3];

    cout << " Matriks A : " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n Matriks B : " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n Penjumlahan Matriks : " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A [i][j] + B [i][j];
            cout << " " << A[i][j] << " + " << B[i][j] << " = " << C[i][j] << " ";
        }
    cout << endl;
    }

    cout << "\n Pengurangan Matriks : " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A [i][j] - B [i][j];
            cout << " " << A[i][j] << " - " << B[i][j] << " = " << C[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}
