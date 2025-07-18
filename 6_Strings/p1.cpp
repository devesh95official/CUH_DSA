//https://codeforces.com/contest/1985/problem/A

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        char c = a[0]; //swapping
        a[0] = b[0];
        b[0] = c;

        cout << a << ' ' << b << '\n';
    }
    return 0;
}