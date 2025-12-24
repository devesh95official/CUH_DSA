// https://www.codechef.com/problems/XLSL

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        int ans = 0;

        // distribute XL tshirts first !
        {
            int have = z;
            int give = c;
            if (have >= give)have -= give, ans += give;
            else ans += have, have = 0;
            y += have;
        }
        // distribute L tshirts second !
        {
            int have = y;
            int give = b;
            if (have >= give)have -= give, ans += give;
            else ans += have, have = 0;
            x += have;
        }
        // distribute S tshirts third !
        {
            int have = x;
            int give = a;
            if (have >= give)have -= give, ans += give;
            else ans += have, have = 0;
        }

        cout << ans << endl;
    }

    return 0;
}