// program to transpose a 2D array
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the dimensions of the array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array
    int arr[rows][cols];

    // Input elements into the 2D array
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Output the transposed elements of the 2D array
    cout << "The transposed elements of the array are:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}