// again

// https://www.codechef.com/problems/GUCD
#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxi1 = -1, maxi2 = -1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > maxi1)maxi2 = maxi1, maxi1 = x;
            else if (x > maxi2)maxi2 = x;
        }

        if (maxi1 != maxi2)cout << maxi2 << endl;
        else cout << maxi1 - 1 << endl;

    }
    return 0;
}