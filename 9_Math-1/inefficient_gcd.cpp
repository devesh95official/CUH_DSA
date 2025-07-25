// bruteforce GCD
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}
// This code uses a brute force method to find the GCD, which is inefficient for large numbers.