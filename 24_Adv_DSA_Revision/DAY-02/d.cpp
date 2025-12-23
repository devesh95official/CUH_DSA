// https://www.codechef.com/problems/DIFFVAL

#include <bits/stdc++.h>

using namespace std;



int main() {

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0')cnt0++;
      else cnt1++;
    }
    int g0 = cnt0 / k;
    int g1 = cnt1 / k;
    int mini = min(g0, g1);
    g0 -= mini, g1 -= mini;
    int e0 = cnt0 % k, e1 = cnt1 % k;

    e0 += (g0 * k);
    e1 += (g1 * k);

    if (e0 > k || e1 > k)cout << "NO\n";
    else cout << "YES\n";
  }

  return 0;
}