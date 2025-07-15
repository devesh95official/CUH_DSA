//prints a 0-1 pattern triangle based on user input
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (j % 2);
        }
        cout << endl;
    }

    return 0;
}

// This program prints a right-angled triangle pattern of 0s and 1s based on user input.
