/*
Problem: Alternating Subsequence
Time Limit: 1 second
Memory Limit: 256 MB

You are given an array of integers. Find the longest subsequence where adjacent 
elements have alternating signs (one is positive, next is negative, then positive, etc.).

For example:
If array is [1, -2, 3, -4, 5], the longest alternating subsequence is [1, -2, 3, -4, 5]
If array is [1, 2, 3, -1, -2], the longest alternating subsequence is [3, -2] or [3, -1]

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- For each test case:
  - First line contains integer n (1 ≤ n ≤ 10^5), size of array
  - Second line contains n integers a[i] (-10^9 ≤ a[i] ≤ 10^9, a[i] ≠ 0)

Output:
- For each test case, print the length of longest alternating subsequence

Example:
Input:
3
5
1 -2 3 -4 5
5
1 2 3 -1 -2
3
-1 -2 -3

Output:
5
2
1
*/

#include <iostream>
#include <vector>
using namespace std;

int longestAlternating(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    
    // dp[i][0] = length ending with positive number at i
    // dp[i][1] = length ending with negative number at i
    vector<vector<int>> dp(n, vector<int>(2, 1));
    int maxLen = 1;
    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > 0 && arr[j] < 0) {
                dp[i][0] = max(dp[i][0], dp[j][1] + 1);
            }
            if (arr[i] < 0 && arr[j] > 0) {
                dp[i][1] = max(dp[i][1], dp[j][0] + 1);
            }
        }
        maxLen = max(maxLen, max(dp[i][0], dp[i][1]));
    }
    
    return maxLen;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << longestAlternating(arr) << endl;
    }
    
    return 0;
}
