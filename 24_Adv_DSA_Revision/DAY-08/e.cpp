#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int64 N, M;
        cin >> N >> M;
        if (N == 1) {
            cout << (M + 1) % MOD << '\n';
        }
        else {
            // p = floor(log2 M)
            int64 p = 63 - __builtin_clzll(M); // safe since M >= 1
            int64 mask = ((int64)1 << (p + 1)) - 1;
            int64 ans = 2 * M - mask + 1; // = 2M - mask + 1
            ans %= MOD;
            if (ans < 0) ans += MOD;
            cout << ans << '\n';
        }
    }
    return 0;
}
