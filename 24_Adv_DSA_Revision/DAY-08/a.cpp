// https://www.codechef.com/problems/XMASTREE

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, a, m, b;
    cin >> n >> a >> m >> b;

    int ans = 0;

    // calculate ans
    {
        int total_cost = n * a;
        int total_sell = m * b;
        int profit = total_sell - total_cost;
        ans = profit;
    }

    cout << ans << endl;

    return 0;
}