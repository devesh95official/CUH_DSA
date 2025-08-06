#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n <= 1)
        return n;
    
    // Recursive case: sum of previous two numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << "Fibonacci Series using Recursion\n";
    cout << "-------------------------------\n";
    
    int terms = 10;
    cout << "First " << terms << " terms of Fibonacci series are:\n";
    
    for(int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    
    cout << "\n\nNote: This is not the most efficient way to calculate Fibonacci numbers";
    cout << "\nas it involves many redundant recursive calls. Dynamic programming";
    cout << "\nwould be more efficient for larger numbers.\n";
    
    return 0;
}
