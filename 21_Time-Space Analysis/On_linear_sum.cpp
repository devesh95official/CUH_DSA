#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1000;
    long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i; // O(n)
    }
    cout << sum << "\n";
    return 0;
}


