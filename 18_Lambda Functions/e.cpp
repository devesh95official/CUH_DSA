#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2};
    sort(v.begin(), v.end(), [](int a, int b) { return a > b; });
    for (int x : v) cout << x << " ";
    cout << "\n";
    return 0;
}


