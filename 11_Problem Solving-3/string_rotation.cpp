/*
Problem: String Rotation Check
Time Limit: 1 second
Memory Limit: 256 MB

You are given two strings s and t. You need to determine if string t can be obtained
by rotating string s by some number of positions (both left or right rotations are allowed).

For example:
- If s = "abcd" and t = "cdab", the answer is YES (rotate left by 2)
- If s = "abcd" and t = "acdb", the answer is NO

Input:
- First line contains an integer T (1 ≤ T ≤ 100), the number of test cases
- For each test case:
  - Two strings s and t (1 ≤ |s|, |t| ≤ 100), consisting of lowercase English letters

Output:
- For each test case, print "YES" if t can be obtained by rotating s, and "NO" otherwise

Example:
Input:
4
abcd cdab
abcd acdb
aa aa
hello elloh

Output:
YES
NO
YES
YES
*/

#include <iostream>
#include <string>
using namespace std;

// Function to check if str2 is a rotation of str1
bool isRotation(string str1, string str2) {
    // If lengths are different, can't be rotation
    if (str1.length() != str2.length())
        return false;
        
    // Concatenate str1 with itself
    // This will contain all possible rotations
    string temp = str1 + str1;
    
    // Check if str2 is a substring of temp
    return temp.find(str2) != string::npos;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s, t;
        cin >> s >> t;
        
        if (isRotation(s, t))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
