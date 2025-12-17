#include <bits/stdc++.h>

using namespace std;

//O(n*n)

int main() {
    int t;
    cin >> t;

    while (t--) {
        //input
        int n;
        cin >> n;
        //extra complexity
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += i;
        }

        if (n % 2)cout << 0 << endl;
        else cout << n / 4 + 1 << endl;
    }

    return 0;
}