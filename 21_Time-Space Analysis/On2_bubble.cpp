#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {9, 8, 7, 3, 2, 1};
    int n = (int)a.size();
    int swaps = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n - i; ++j) {
            if (a[j-1] > a[j]) {
                swap(a[j-1], a[j]);
                swaps++;
            }
        }
    }
    for (int x : a) cout << x << ' ';
    cout << "\n" << "swaps=" << swaps << "\n";
    return 0;
}


