#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Range Sum Queries using Prefix Sums
// Input:
// T test cases. For each test case:
//  - N Q
//  - N integers (array)
//  - Q lines: l r (1-based, inclusive)
// Output:
//  For each query, print the sum of a[l..r] on a new line.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<long long> a(N + 1, 0), pref(N + 1, 0);
        for (int i = 1; i <= N; ++i) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }
        while (Q--) {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            l = max(l, 1);
            r = min(r, N);
            long long ans = pref[r] - pref[l - 1];
            cout << ans << '\n';
        }
    }
    return 0;
}


