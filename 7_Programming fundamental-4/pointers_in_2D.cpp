// Demonstrating pointers in 2D arrays like arr, arr[i], etc
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

    // Output the elements of the 2D array using pointers
    cout << "The elements of the array are (using pointers):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
// This code demonstrates how to access elements of a 2D array using pointers.
// The expression *(*(arr + i) + j) dereferences the pointer to the ith row and then dereferences the pointer to the jth column, effectively accessing the element at position (i, j) in the 2D array.
// The output will be the same as the original 2D array input, but it shows how pointers can be used to navigate through the array elements.
// Note: The use of variable-length arrays (VLAs) like int arr[rows][cols]; is a feature of C99 and is not part of the C++ standard. In C++, you would typically use dynamic memory allocation (e.g., using `std::vector` or `new`) for variable-sized arrays. However, this code assumes a C++17 environment where VLAs are allowed as an extension in some compilers.