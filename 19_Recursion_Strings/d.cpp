#include <bits/stdc++.h>

using namespace std;

void is_palindrome(string s, int&f, int i) {
    if (i == s.size() / 2)return;
    if (s[i] != s[s.size() - 1 - i])f = 0;
    is_palindrome(s, f, i + 1);
}

int main() {

    string s;
    cin >> s;

    int f = 1;

    is_palindrome(s, f, 0);

    if (f)cout << "YES , Palindrome\n";
    else cout << "NO , NOT a Palindrome\n";

    return 0;
}