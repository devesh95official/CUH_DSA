// Different strings implementations
#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "Hello, World!";
    cout << greeting << endl;

    // C-style string
    const char* cstr = "Hello, World!";
    cout << cstr << endl;

    return 0;
}