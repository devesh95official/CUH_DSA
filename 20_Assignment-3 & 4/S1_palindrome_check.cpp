#include <iostream>
#include <string>
using namespace std;

// Problem: Check if a string is a palindrome (case-sensitive, no spaces handled)
// Input:
// T test cases. For each:
//  - string s (no spaces)
// Output:
//  YES if s is palindrome, else NO

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        string s; cin >> s;
        int i = 0, j = (int)s.size() - 1;
        bool ok = true;
        while (i < j) {
            if (s[i] != s[j]) { ok = false; break; }
            ++i; --j;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


