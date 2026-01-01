#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<int> v = {1, 2, 4, 6, 8, 10};

    cout << *upper_bound(v.begin(), v.end(), 10) << endl;

    set<int> s = {1, 3, 6, 8};
    cout << *s.lower_bound(5);

    return 0;
}