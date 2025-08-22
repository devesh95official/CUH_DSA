#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(32);
    iota(data.begin(), data.end(), 1); // 1..32
    int target = 23;
    int low = 0, high = (int)data.size() - 1;
    int steps = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        steps++;
        if (data[mid] == target) {
            cout << "found at index " << mid << ", steps=" << steps << "\n";
            return 0;
        } else if (data[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "not found, steps=" << steps << "\n";
    return 0;
}


