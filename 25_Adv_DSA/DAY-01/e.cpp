// lower bound in a sorted array

// Equal or just big in array

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int n, target;
    cin >> n >> target;
    vector<int> nums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int l = -1, r = n - 1;

    while (l + 1 < r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] >= target)r = mid;
        else l = mid;
    }

    cout << nums[r] << endl;

    return 0;
}