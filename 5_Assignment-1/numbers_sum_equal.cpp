// program to check if the sum of two numbers is equal to a third number

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {

        int a, b, c;
        cin >> a >> b >> c; // inputs taken

        if (a + b == c)cout << "YES\n";
        else if (b + c == a)cout << "YES\n";
        else if (c + a == b)cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}