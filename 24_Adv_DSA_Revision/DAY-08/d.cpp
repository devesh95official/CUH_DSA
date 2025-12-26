// https://www.codechef.com/problems/DELARR77

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }


        vector<int> v(n);
        //calc v
        {
            int mini = c[0];
            int idx = 0;
            for (int i = 0; i < n; i++) {
                if (c[i] < mini) {
                    mini = c[i];
                    idx = i;
                }
                v[i] = idx;
            }
        }

        int ans = 0;
        //calc ans
        {
            for (int i = n - 1; i >= 0; i--) {
                int idx = v[i];
                int cost = c[idx];
                ans += cost * a[idx];
                a.erase(a.begin() + idx); // O(n)
            }
        }

        cout << ans << endl;
    }

    return 0;
}