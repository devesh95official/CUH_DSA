#include <bits/stdc++.h>

using namespace std;

void printReverse(string s, int i) {
    if (i == -1)return;
    cout << s[i];
    printReverse(s, i - 1);
}

int main() {

    string s;
    cin >> s;

    printReverse(s, s.size() - 1);

    return 0;
}