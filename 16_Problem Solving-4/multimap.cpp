#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<string, int> mm;
    mm.insert({"a", 1});
    mm.insert({"b", 2});
    mm.insert({"a", 3});
    for (auto p : mm) cout << p.first << ' ' << p.second << '\n';
    return 0;
}
