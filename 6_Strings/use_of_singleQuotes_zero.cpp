// use_of_'0'.cpp
// This program demonstrates the use of character '0' in C++
#include <bits/stdc++.h>

using namespace std;

int main() {

    char c = 8 + '0';// Convert integer 8 to character '8'
    // The expression '8 + '0'' adds 8 to the ASCII value of '0', which is 48, resulting in the ASCII value of '8' (56).
    // Thus, c will hold the character '8'.
    int a = '8' - '0';// Convert character '8' to integer 8

    cout << c << '\n';
    cout << a << '\n';// Output the character '8' and the integer 8


    return 0;
}