#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    string names[] = {"dinkar", "abdul", "dinkar", "piyush", "abdul", "dinkar"};
    for (auto n : names) m[n]++;
    for (auto p : m) cout << p.first << ' ' << p.second << '\n';
    return 0;
}
