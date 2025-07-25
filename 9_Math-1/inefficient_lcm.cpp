// program to find the least common multiple (LCM) of two numbers using for loop
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    int lcm;
    for (lcm = max(num1, num2); ; lcm++) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }

    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
    return 0;
}
// This code uses a brute force method to find the LCM, which is inefficient for large numbers.