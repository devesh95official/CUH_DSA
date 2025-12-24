// https://www.codechef.com/problems/PERDIS
// piyush method
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
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == i + 1 && arr[i + 1] == i + 2)ans++, i++;
            else if (arr[i] == i + 1)ans++;
        }

        cout << ans << endl;
    }

    return 0;
}