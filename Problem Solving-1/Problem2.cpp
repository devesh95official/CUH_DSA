//https://codeforces.com/contest/1915/problem/A

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t; // input testcases

    while (t--) {

        int a, b, c;
        cin >> a >> b >> c; // inputs taken

        if (a == b){
            cout << c << endl;
        }
        else if (b == c){
            cout << a << endl;
        }
        else {
            cout << b << endl;
        }

    }

    return 0;
}