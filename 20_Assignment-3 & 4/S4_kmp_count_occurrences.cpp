#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Problem: Count occurrences of pattern in text using KMP
// Input:
// T test cases. For each:
//  - string text
//  - string pattern
// Output:
//  Count of occurrences (possibly overlapping)

static vector<int> buildPi(const string &p) {
    int m = (int)p.size();
    vector<int> pi(m, 0);
    for (int i = 1; i < m; ++i) {
        int j = pi[i - 1];
        while (j > 0 && p[i] != p[j]) j = pi[j - 1];
        if (p[i] == p[j]) ++j;
        pi[i] = j;
    }
    return pi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        string text, pattern; cin >> text >> pattern;
        if (pattern.empty()) { cout << 0 << '\n'; continue; }
        vector<int> pi = buildPi(pattern);
        int j = 0, cnt = 0;
        for (int i = 0; i < (int)text.size(); ++i) {
            while (j > 0 && text[i] != pattern[j]) j = pi[j - 1];
            if (text[i] == pattern[j]) ++j;
            if (j == (int)pattern.size()) {
                ++cnt;
                j = pi[j - 1];
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}


