// https://www.codechef.com/problems/FINALSALE
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

        long long ans = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i]; // sum till now
            // if we announce Closing
            ans = max(ans, sum + arr[i]);
        }
        cout << ans << endl;
    }

    return 0;
}