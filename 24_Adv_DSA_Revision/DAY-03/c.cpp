// https://www.codechef.com/problems/BESTSEATS

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

        int ans = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            int cost = arr[i] + arr[i + 1];
            if (cost < ans)ans = cost;
        }

        cout << ans << endl;
    }

    return 0;
}