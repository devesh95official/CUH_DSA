#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p = {1, "a"};
    cout << p.first << ' ' << p.second << "\n";

    tuple<int, string, double> t = {2, "b", 3.5};
    cout << get<0>(t) << ' ' << get<1>(t) << ' ' << get<2>(t) << "\n";

    return 0;
}
