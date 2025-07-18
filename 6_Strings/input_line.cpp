#include <iostream>

using namespace std;

int main() {

    string t;

    cout << "Enter a string: ";

    getline(cin, t);// Read the entire line including spaces

    cout << "You entered: " << t << endl;
    // Display the length of the string
    cout << "Length of the string: " << t.length() << endl;
    return 0;
}