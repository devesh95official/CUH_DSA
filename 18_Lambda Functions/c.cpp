#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 5;
    auto addToX = [x](int y) { return x + y; };
    cout << addToX(3) << "\n";
    cout << x << "\n";
    return 0;
}


