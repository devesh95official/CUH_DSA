#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }

        int first = *s.begin(), second = *(--s.end());

        int ans = second - 1;
        if (ans == first)ans--;

        cout << ans << endl;
    }


    return 0;
}