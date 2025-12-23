// https://www.codechef.com/problems/SCORING

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {

        int x, y;
        cin >> x >> y;

        cout << (y + x) / 2 << " ";
        cout << (y - x) / 2 << endl;
    }

    return 0;
}