#include <bits/stdc++.h>

using namespace std;



int main() {
    vector<int> v = {1, 2, 31, 41, 51};
    int x = 40;
    auto it = upper_bound(v.begin(), v.end(), x);

    cout << *(--it) << endl;

    return 0;
}