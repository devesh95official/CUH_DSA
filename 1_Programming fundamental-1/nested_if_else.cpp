#include <iostream>
using namespace std;

int main() {
    int rollNumber;
    cout << "Enter your roll number: ";
    cin >> rollNumber;

    // Nested if-else to determine the group
    if (rollNumber >= 1 && rollNumber <= 10) {
        cout << "You are in Group A." << endl;
        // Additional instructions for Group A
        cout << "Please attend the workshop on C++." << endl;
    } 
    else if (rollNumber >= 11 && rollNumber <= 20) {
        cout << "You are in Group B." << endl;
        // Additional instructions for Group B
        cout << "Please attend the workshop on Python." << endl;
    } 
    else if (rollNumber >= 21 && rollNumber <= 30) {
        cout << "You are in Group C." << endl;
        // Additional instructions for Group C
        cout << "Please attend the workshop on Java." << endl;
    }
    else if (rollNumber >= 31 && rollNumber <= 40) {
        cout << "You are in Group D." << endl;
        // Additional instructions for Group D
        cout << "Please attend the workshop on JavaScript." << endl;
    }
    else {
        cout << "Invalid roll number. Please enter a roll number between 1 and 40." << endl;
    }

    return 0;
}
