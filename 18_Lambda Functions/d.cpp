#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0;
    auto increment = [&]() { count++; };
    increment();
    increment();
    cout << count << "\n";
    return 0;
}


