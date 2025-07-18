//string to array similarities in C++ detailed implementation
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "Hello";
    char charArray[6]; // One extra space for null terminator

    // Copying string to char array
    for (size_t i = 0; i < str.length(); ++i) {
        charArray[i] = str[i];
    }
    charArray[str.length()] = '\0'; // Null terminator

    // Output
    cout << "String: " << str << endl;
    cout << "Char Array: " << charArray << endl;

    return 0;
}
// This program demonstrates the similarities between C++ strings and character arrays