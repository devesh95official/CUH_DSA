#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Problem: Length of Longest Substring Without Repeating Characters
// Input:
// T test cases. For each:
//  - string s
// Output:
//  Length as integer

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        string s; cin >> s;
        vector<int> last(256, -1);
        int best = 0, start = 0;
        for (int i = 0; i < (int)s.size(); ++i) {
            unsigned char c = (unsigned char)s[i];
            if (last[c] >= start) start = last[c] + 1;
            last[c] = i;
            best = max(best, i - start + 1);
        }
        cout << best << '\n';
    }
    return 0;
}


