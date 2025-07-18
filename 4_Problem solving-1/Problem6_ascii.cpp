// use of ascii values
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Display ASCII value
    cout << "ASCII value of " << ch << " is " << int(ch) << endl;

    return 0;
}