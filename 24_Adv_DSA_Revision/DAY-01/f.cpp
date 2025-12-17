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
        vector<int> a;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    for (int k1 = 0; k < n; k++) {
                        for (int k2 = 0; k < n; k++) {
                            for (int k3 = 0; k < n; k++) {
                                sum += k3;
                                a.push_back(0);
                            }
                        }
                    }
                }
            }
        }

        if (n % 2)cout << 0 << endl;
        else cout << n / 4 + 1 << endl;
    }

    return 0;
}