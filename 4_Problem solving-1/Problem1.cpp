//https://codeforces.com/contest/1971/problem/A

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {


        int x, y;    //input
        cin >> x >> y;


        if (x < y){   //checking condition
            cout << x << ' ' << y << '\n';
        }
        else {
            cout << y << ' ' << x << '\n';
        }

    }

    return 0;
}