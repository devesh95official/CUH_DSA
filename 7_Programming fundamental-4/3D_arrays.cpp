// multidimentional arrays Program
// This program demonstrates how to work with 3D arrays in C++.
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Input the dimensions of the 3D array
    cout << "Enter the dimensions of the 3D array (x y z): ";
    cin >> x >> y >> z;

    // Declare a 3D array
    int arr[x][y][z];

    // Input elements into the 3D array
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    // Output the elements of the 3D array
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}