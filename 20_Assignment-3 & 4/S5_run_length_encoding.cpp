#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Problem: Run-Length Encoding (RLE)
// Input:
// T test cases. For each:
//  - string s (no spaces)
// Output:
//  Encoded string where consecutive groups are represented as char+count

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        string s; cin >> s;
        if (s.empty()) { cout << "" << '\n'; continue; }
        string out;
        int cnt = 1;
        for (int i = 1; i <= (int)s.size(); ++i) {
            if (i < (int)s.size() && s[i] == s[i - 1]) {
                ++cnt;
            } else {
                out.push_back(s[i - 1]);
                out += to_string(cnt);
                cnt = 1;
            }
        }
        cout << out << '\n';
    }
    return 0;
}


