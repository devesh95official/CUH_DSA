//https://codeforces.com/contest/2009/problem/A


#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {

        int a, b;
        cin >> a >> b; // input two integers
        
        // observed pattern to get the ans.
        // The equation is (c - a) + (b - c) = b - a
        // where c is the midpoint of a and b.
        cout << (b - a) << endl;

    }

    return 0;
}