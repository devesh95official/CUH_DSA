#include <bits/stdc++.h>

using namespace std;

void printReverse(string s, int i) {
    if (i == s.size())return;
    printReverse(s, i + 1);
    cout << s[i];
}

int main() {

    string s;
    cin >> s;

    printReverse(s, 0);

    return 0;
}