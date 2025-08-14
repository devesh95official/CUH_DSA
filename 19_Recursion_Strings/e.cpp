#include <bits/stdc++.h>

using namespace std;


map<char, int>mp;

void store(string s, int i) {
    if (i == s.size())return;
    mp[s[i]]++;
    store( s, i + 1);
}

int main() {


    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++) {
    //     mp[s[i]]++;
    // }

    store(s, 0);

    for (auto x : mp) {
        cout << x.first << "  ==  " << x.second << endl;
    }
    return 0;
}