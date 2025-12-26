// https://www.codechef.com/problems/STOPCOUNT

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        //calc ans
        {
            int chef = 0, antichef = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == '1')chef++;
                else antichef++;
                if (chef > antichef)ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}