#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> counts;

    string names[] = {"dinkar", "abdul", "dinkar", "piyush", "abdul", "dinkar"};

    for (auto n : names) {
        counts[n]++;
    }

    for (auto entry : counts) {
        cout << entry.first << " " << entry.second << "\n";
    }

    return 0;
}
