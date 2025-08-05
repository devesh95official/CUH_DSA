/*
Problem: Make Array Beautiful
Time Limit: 1 second
Memory Limit: 256 MB

An array is beautiful if every element is either strictly greater than both its neighbors
or strictly smaller than both its neighbors. First and last elements must be strictly
greater/smaller than their only neighbor.

You can perform the following operation any number of times:
- Choose any element and increase or decrease it by 1

Find the minimum number of operations needed to make the array beautiful.

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- For each test case:
  - First line contains integer n (2 ≤ n ≤ 10^5)
  - Second line contains n integers a[i] (1 ≤ a[i] ≤ 10^9)

Output:
- For each test case, print minimum operations needed

Example:
Input:
3
4
1 2 2 1
3
1 1 1
5
1 2 3 2 1

Output:
1
1
0

Explanation:
Case 1: Change one 2 to 3, making array [1,2,3,1]
Case 2: Change middle 1 to 2, making array [1,2,1]
Case 3: Already beautiful [1,2,3,2,1]
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minOperations(vector<int>& arr) {
    int n = arr.size();
    if (n <= 2) return 0;
    
    int operations = 0;
    for (int i = 1; i < n-1; i++) {
        // If current element equals either neighbor
        if (arr[i] == arr[i-1] || arr[i] == arr[i+1]) {
            // Increase by 1 if it makes pattern alternating
            operations++;
            arr[i]++;
        }
        // If current element doesn't follow pattern
        else if (!((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || 
                  (arr[i] < arr[i-1] && arr[i] < arr[i+1]))) {
            operations++;
            // Make it larger than neighbors if previous was smaller
            if (i > 1 && arr[i-1] < arr[i-2])
                arr[i] = max(arr[i-1], arr[i+1]) + 1;
            else
                arr[i] = min(arr[i-1], arr[i+1]) - 1;
        }
    }
    
    return operations;
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
