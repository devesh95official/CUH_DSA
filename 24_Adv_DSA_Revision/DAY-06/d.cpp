
// https://www.codechef.com/problems/GUCD

#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxi = INT_MIN;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }

        // freq
        vector<int> freq(maxi + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        vector<int>cnt(maxi + 2, 0);
        for (int i = maxi; i >= 1; i--) {
            cnt[i] = cnt[i + 1] + freq[i];
        }

        int ans = 1;

        for (int i = maxi; i >= 1; i--) {
            if (cnt[i] < 2)continue;

            int cnt1 = 0;
            for (int j = i; j <= maxi; j += i) {
                cnt1 += freq[j];
                if (cnt1 >= cnt[i])break;
            }

            int notdiv = cnt[i] - cnt1;
            if (notdiv >= 2) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}