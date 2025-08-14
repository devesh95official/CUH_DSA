#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Check if a pair with given sum exists (two pointers)
// Input:
// T test cases. For each:
//  - N target
//  - N integers
// Output:
//  YES if a pair exists with sum == target, else NO

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        int N; long long target;
        cin >> N >> target;
        vector<long long> a(N);
        for (int i = 0; i < N; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int i = 0, j = N - 1;
        bool ok = false;
        while (i < j) {
            long long s = a[i] + a[j];
            if (s == target) { ok = true; break; }
            if (s < target) ++i; else --j;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


