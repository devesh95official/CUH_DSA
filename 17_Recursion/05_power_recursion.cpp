#include <iostream>
using namespace std;

// Recursive function to calculate power
double power(double base, int exponent) {
    // Base cases
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;
    
    // For negative exponents
    if (exponent < 0)
        return 1 / power(base, -exponent);
    
    // Recursive case
    // If exponent is even
    if (exponent % 2 == 0)
        return power(base, exponent/2) * power(base, exponent/2);
    // If exponent is odd
    else
        return base * power(base, exponent-1);
}

int main() {
    cout << "Power Calculation using Recursion\n";
    cout << "--------------------------------\n";
    
    // Test cases
    double base[] = {2, 3, 5};
    int exponent[] = {3, -2, 4};
    
    for(int i = 0; i < 3; i++) {
        cout << base[i] << " raised to power " << exponent[i] << " is: " 
             << power(base[i], exponent[i]) << endl;
    }
    
    cout << "\nNote: This program shows how recursion can handle both positive";
    cout << "\nand negative exponents. The implementation uses divide and conquer";
    cout << "\napproach for better efficiency.\n";
    
    return 0;
}
