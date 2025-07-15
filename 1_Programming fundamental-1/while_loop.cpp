//Program which shows the use of while loop
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    // Using a while loop to print numbers from 1 to 5
    cout << "Counting from 1 to 5 using while loop:" << endl;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}