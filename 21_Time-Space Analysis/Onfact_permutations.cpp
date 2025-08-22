#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4}; // 4! = 24 permutations
    int countPerm = 0;
    sort(a.begin(), a.end());
    do {
        countPerm++;
    } while (next_permutation(a.begin(), a.end()));
    cout << countPerm << "\n";
    return 0;
}


