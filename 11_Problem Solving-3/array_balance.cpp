/*
Problem: Array Balance
Time Limit: 1 second
Memory Limit: 256 MB

You are given an array of n integers. In one operation, you can choose any two adjacent
elements and either increment one of them by 1 or decrement one of them by 1.

Your task is to find the minimum number of operations needed to make all elements
in the array equal.

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- For each test case:
  - First line contains an integer n (2 ≤ n ≤ 100)
  - Second line contains n integers a[i] (1 ≤ a[i] ≤ 100)

Output:
- For each test case, print the minimum number of operations needed

Example:
Input:
3
3
1 2 1
4
5 5 5 5
5
1 2 3 2 1

Output:
1
0
4

Explanation:
Case 1: Change 2 to 1 in one operation
Case 2: Already equal, no operations needed
Case 3: Can make all elements 2 in 4 operations
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minOperations(vector<int>& arr) {
    int n = arr.size();
    int operations = 0;
    
    // The optimal value will be one of the numbers in the middle of the sorted array
    // Sort the array to find the median
    sort(arr.begin(), arr.end());
    int target = arr[n/2];
    
    // Calculate minimum operations needed to make all elements equal to target
    for (int i = 0; i < n; i++) {
        operations += abs(arr[i] - target);
    }
    
    return operations / 2;  // Each operation changes two numbers by 1
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
        
        cout << minOperations(arr) << endl;
    }
    
    return 0;
}
