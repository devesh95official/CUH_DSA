#include <bits/stdc++.h>
using namespace std;

long long fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2); // O(2^n)
}

int main() {
    int n = 35; // keep small so it finishes
    cout << fib(n) << "\n";
    return 0;
}


