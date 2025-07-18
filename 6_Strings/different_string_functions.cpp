// different string functions example
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;

    // Length
    cout << "Length: " << str.length() << endl;

    // Substring
    cout << "Substring (0, 5): " << str.substr(0, 5) << endl;

    // Find
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "Found 'World' at position: " << pos << endl;
    }

    // Replace
    str.replace(7, 5, "C++");
    cout << "After Replace: " << str << endl;

    return 0;
}
// This program demonstrates various string functions in C++