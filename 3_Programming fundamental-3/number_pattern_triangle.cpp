// prints a number pattern triangle based on user input
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

// This program prints a right-angled triangle pattern of numbers based on user input.
