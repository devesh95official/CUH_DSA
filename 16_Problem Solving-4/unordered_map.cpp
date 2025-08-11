#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> m;
    int nums[] = {1, 2, 1, 3, 2, 1};
    for (auto x : nums) m[x]++;
    for (auto p : m) cout << p.first << ' ' << p.second << '\n';
    return 0;
}
