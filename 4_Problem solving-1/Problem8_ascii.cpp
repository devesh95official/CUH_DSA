// check if lower case or upper case or neither using ascii values
#include <iostream>
using namespace std;
//theory: ASCII values for uppercase letters (A-Z) are 65-90 and for lowercase letters (a-z) are 97-122
int main() {
    
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (int(ch) >= 65 && int(ch) <= 90) {
        cout << ch << " is an uppercase letter." << endl;
    } 
    else if (int(ch) >= 97 && int(ch) <= 122) {
        cout << ch << " is a lowercase letter." << endl;
    } 
    else {
        cout << ch << " is neither uppercase nor lowercase." << endl;
    }
    
    return 0;
}
