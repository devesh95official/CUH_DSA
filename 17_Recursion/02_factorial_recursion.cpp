#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1)
        return 1;
    
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial Calculator using Recursion\n";
    cout << "-----------------------------------\n";
    
    for(int i = 0; i <= 10; i++) {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }
    
    cout << "\nNote: This program demonstrates a simple recursive solution.";
    cout << "\nEach call to factorial() creates a new stack frame until base case is reached.\n";
    
    return 0;
}
