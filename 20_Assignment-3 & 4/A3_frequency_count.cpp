#include <iostream>
#include <vector>
using namespace std;

// Problem: Frequency count for values in range [1..N]
// Input:
// T test cases. For each:
//  - N M (array length and max value)
//  - N integers a[i] in [1..M]
// Output:
//  Print M integers: freq(1) freq(2) ... freq(M)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<long long> freq(M + 1, 0);
        for (int i = 0; i < N; ++i) {
            int x; cin >> x;
            if (1 <= x && x <= M) freq[x]++;
        }
        for (int v = 1; v <= M; ++v) {
            if (v > 1) cout << ' ';
            cout << freq[v];
        }
        cout << '\n';
    }
    return 0;
}


