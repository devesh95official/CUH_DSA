// Program which shows the use of do-while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // Using a do-while loop to print numbers from 1 to 5
    cout << "Counting from 1 to 5 using do-while loop:" << endl;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;

    return 0;
}

// This program demonstrates the use of a do-while loop 
// to ensure that the loop executes at least once.