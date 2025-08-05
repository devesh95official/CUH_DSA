/*
Problem: Special Numbers
Time Limit: 1 second
Memory Limit: 256 MB

A number is called special if it has exactly three distinct factors (including 1 and itself).
For example, 4 is special because its factors are {1, 2, 4}, but 6 is not special because
its factors are {1, 2, 3, 6}.

Given a range [L, R], find the count of special numbers in this range.

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- For each test case:
  - Two integers L and R (1 ≤ L ≤ R ≤ 10^4)

Output:
- For each test case, print the count of special numbers in range [L, R]

Example:
Input:
3
1 10
4 4
1 100

Output:
2
1
10

Explanation:
- In range [1,10], only 4 and 9 are special numbers
- In range [4,4], only 4 is a special number
- In range [1,100], there are 10 special numbers
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to count factors of a number
int countFactors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

// Function to count special numbers in range [l,r]
int countSpecialNumbers(int l, int r) {
    int count = 0;
    
    // Check each number in the range
    for (int i = l; i <= r; i++) {
        // If number has exactly 3 factors, it's special
        if (countFactors(i) == 3)
            count++;
    }
    
    return count;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << countSpecialNumbers(l, r) << endl;
    }
    
    return 0;
}
