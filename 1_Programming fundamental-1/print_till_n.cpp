#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program with an error code
    }
    // Print numbers from 1 to n
    cout << "Counting from 1 to " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}