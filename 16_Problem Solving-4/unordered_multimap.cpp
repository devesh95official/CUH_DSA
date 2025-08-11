#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<string, int> umm;
    umm.insert({"a", 1});
    umm.insert({"b", 2});
    umm.insert({"a", 3});
    for (auto p : umm) cout << p.first << ' ' << p.second << '\n';
    return 0;
}
