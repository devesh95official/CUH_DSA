#include <iostream>
#include <limits>
using namespace std;

// Problem: Maximum Subarray Sum (Kadane's Algorithm)
// Input:
// T test cases. For each:
//  - N
//  - N integers
// Output:
//  Maximum subarray sum

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        long long best = LLONG_MIN, curr = 0;
        for (int i = 0; i < N; ++i) {
            long long x; cin >> x;
            curr = max(x, curr + x);
            best = max(best, curr);
        }
        cout << best << '\n';
    }
    return 0;
}


