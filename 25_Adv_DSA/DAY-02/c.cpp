// multiset


#include <bits/stdc++.h>

using namespace std;



int main() {

    multiset<int> s = {2, 4, 3, 4, 6, 7, 4};

    // sorted
    // contains duplicates

    s.insert(1);
    s.insert(10);

    // erase
    // erase by iterator
    s.erase(s.begin()); // erase first element
    s.erase(s.find(*s.begin()));

    //s.erase(4);
    cout << s.count(4) << endl;
    s.erase(s.find(4));
    cout << s.count(4) << endl;
    for (auto x : s)cout << x << " ";

    return 0;
}