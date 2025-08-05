#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Try all possible combinations of three letters
        for (int i = 1; i <= 26; i++) {
            for (int j = 1; j <= 26; j++) {
                int k = n - i - j;
                if (k >= 1 && k <= 26) {
                    // Print the lexicographically smallest word
                    cout << char('a' + i - 1) << char('a' + j - 1) << char('a' + k - 1) << endl;
                    break;
                }
            }
            if (n - i <= 52) break;  // Optimization: if remaining sum too small, break
        }
    }
    
    return 0;
}
