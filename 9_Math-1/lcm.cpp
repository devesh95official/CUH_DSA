// LCM using GCD
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int lcm = (num1 * num2) / gcd(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}
// This code uses the relationship between GCD and LCM to find the least common multiple efficiently.