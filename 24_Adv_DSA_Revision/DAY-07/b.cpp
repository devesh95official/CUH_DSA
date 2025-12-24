// https://www.codechef.com/problems/CHEFIZZA
#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int temp = 1;
        while (temp * 2 <= n)temp *= 2;
        n -= temp;
        cout << 2 * n << endl;
    }

    return 0;
}