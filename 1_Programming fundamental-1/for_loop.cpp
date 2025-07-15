// program to use for loops for differnt tasks
#include <iostream>
using namespace std;

int main() {
    // Task 1: Print numbers from 1 to 5
    cout << "Task 1: Print numbers from 1 to 5" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Task 2: Print even numbers from 2 to 10
    cout << "Task 2: Print even numbers from 2 to 10" << endl;
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // Task 3: Print the multiplication table of 2
    cout << "Task 3: Print the multiplication table of 2" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }

    return 0;
}