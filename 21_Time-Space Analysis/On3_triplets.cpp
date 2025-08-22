#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 30; // small to finish quickly
    int countTriplets = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                if ((i + j + k) % 13 == 0) countTriplets++;
            }
        }
    }
    cout << countTriplets << "\n";
    return 0;
}


