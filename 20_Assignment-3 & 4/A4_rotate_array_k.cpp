#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem: Rotate array to the right by K positions
// Input:
// T test cases. For each:
//  - N K
//  - N integers
// Output:
//  Rotated array

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        vector<long long> a(N);
        for (long long i = 0; i < N; ++i) cin >> a[i];
        if (N > 0) {
            K %= N;
            rotate(a.begin(), a.end() - K, a.end());
        }
        for (long long i = 0; i < N; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}


