/*
Problem: Prime Factor Power
Time Limit: 1 second
Memory Limit: 256 MB

Given a number N, you need to find the highest power of any prime factor in its
prime factorization. For example, if N = 24 = 2^3 × 3^1, the answer is 3.

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- Each test case contains a single integer N (2 ≤ N ≤ 10^9)

Output:
- For each test case, print the highest power of any prime factor in N

Example:
Input:
4
24
16
27
100

Output:
3
4
3
2

Explanation:
- 24 = 2^3 × 3^1, highest power is 3
- 16 = 2^4, highest power is 4
- 27 = 3^3, highest power is 3
- 100 = 2^2 × 5^2, highest power is 2
*/

#include <iostream>
#include <cmath>
using namespace std;

int maxPrimePower(int n) {
    int maxPower = 0;
    
    // Check powers of 2
    int power = 0;
    while (n % 2 == 0) {
        power++;
        n = n / 2;
    }
    maxPower = max(maxPower, power);
    
    // Check powers of odd numbers up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        power = 0;
        while (n % i == 0) {
            power++;
            n = n / i;
        }
        maxPower = max(maxPower, power);
    }
    
    // If n > 2, then n is prime number
    if (n > 2) {
        maxPower = max(maxPower, 1);
    }
    
    return maxPower;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << maxPrimePower(n) << endl;
    }
    
    return 0;
}
