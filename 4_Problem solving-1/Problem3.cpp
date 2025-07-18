//https://codeforces.com/contest/1999/problem/A

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t; // input testcases

    while (t--) {

        int n;
        cin >> n; // input number
        // The problem requires us to find the sum of the digits of n.
        // Since n is guaranteed to be a two-digit number, we can simply add the digits
        cout << n / 10 + n % 10 << endl;
        
    }

    return 0;
}