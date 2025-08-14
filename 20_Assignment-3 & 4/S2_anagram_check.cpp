#include <iostream>
#include <array>
#include <string>
using namespace std;

// Problem: Check if two strings are anagrams (ASCII)
// Input:
// T test cases. For each:
//  - string a
//  - string b
// Output:
//  YES if a and b are anagrams, else NO

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; if (!(cin >> T)) return 0;
    while (T--) {
        string a, b; cin >> a >> b;
        if (a.size() != b.size()) { cout << "NO\n"; continue; }
        array<int, 256> cnt{}; cnt.fill(0);
        for (char c : a) cnt[(unsigned char)c]++;
        for (char c : b) cnt[(unsigned char)c]--;
        bool ok = true;
        for (int v : cnt) if (v) { ok = false; break; }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


