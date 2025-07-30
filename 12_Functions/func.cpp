#include <bits/stdc++.h>

using namespace std;

// different examples of functions

void dinkar() {
    cout << "Sir\n";

    int a, b;
    cin >> a >> b;

    if (a >= b)cout << a << endl;
    else cout << b << endl;
}

void abdul() {
    cout << "What do you want!!?\n";
    string s;
    getline(cin, s);
    cout << "SIR , u said :" << s << endl;
}

void haritha(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    cout << "SIR, Done\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    haritha(n, arr);

    return 0;
}