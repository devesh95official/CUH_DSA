// https://www.codechef.com/problems/PERDIS

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == i + 1)cnt++;
            else ans += (cnt / 2 + (cnt % 2)), cnt = 0;
        }
        if (cnt)ans += (cnt / 2 + (cnt % 2));
        
        cout << ans << endl;
    }

    return 0;
}