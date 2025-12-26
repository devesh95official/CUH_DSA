// https://www.codechef.com/problems/BALLOONS

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans = 0;

        //calc ans
        {
            for (int i = 1; i <= n; i++) {
                int a;
                cin >> a;
                ans += a * i;
            }
        }

        cout << ans << endl;

    }

    return 0;
}