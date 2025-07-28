#include <iostream>

using namespace std;

int main() {
    int l, s, p;
    cin >> l >> s >> p;

    if (l == 5) {
        if (s >= 90) {
            if (p == 0) {
                cout << "Champion";
            }
            else {
                cout << "Qualified";
            }
        }
        else {
            if (s >= 70) {
                cout << "Qualified";
            }
            else {
                cout << "Disqualified";
            }
        }
    }
    else if (l == 3 || l == 4) {
        if (s >= 80) {
            if (p <= 2) {
                cout << "Promoted";
            }
            else {
                cout << "Needs Review";
            }
        }
        else {
            cout << "Try Again";
        }
    }
    else if (l <= 2) {
        if (s >= 60) {
            if (p <= 3) {
                cout << "Advance";
            }
            else {
                cout << "Warning Issued";
            }
        }
        else {
            cout << "Eliminated";
        }
    }
    return 0;
}