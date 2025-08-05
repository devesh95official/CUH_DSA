// program to multiply two matrices
#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input the dimensions of the matrices
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rowsA >> colsA;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rowsB >> colsB;

    // Check if multiplication is possible
    if (colsA != rowsB) {
        cerr << "Incompatible matrix dimensions" << endl;
        return 1;
    }

    // Declare the matrices
    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    // Input elements into the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements into the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize the result matrix
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result
    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}