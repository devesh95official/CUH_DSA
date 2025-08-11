#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> counts;

    int nums[] = {1, 2, 1, 3, 2, 1};

    for (auto x : nums) {
        counts[x]++;
    }

    for (auto p : counts) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
