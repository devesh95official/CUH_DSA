
//https://codeforces.com/contest/2065/problem/A

// program to solve the problem from Codeforces contest 2065, problem A
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 2; i++)cout << s[i]; 
        cout << "i\n";
    }
    return 0;
}