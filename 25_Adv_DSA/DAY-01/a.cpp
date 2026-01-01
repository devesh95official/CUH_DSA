// https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // range to search
        int l = 0, r = n - 1;

        while (l <= r) {

            int mid = l + (r - l) / 2; 

            if (nums[mid] == target)return mid;

            if (nums[mid] < target)l = mid + 1;
            else r = mid - 1;
        }
        // if number not exists than return -1;
        return -1;

    }
};

int main() {
    return 0;
}