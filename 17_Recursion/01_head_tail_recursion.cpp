#include <iostream>
using namespace std;

// Head Recursion Example - Processing is done at the beginning
void printNumbersHead(int n) {
    if (n == 0)
        return;
    
    // Processing before recursive call
    cout << n << " ";
    // Recursive call at the end
    printNumbersHead(n - 1);
}

// Tail Recursion Example - Processing is done at the end
void printNumbersTail(int n) {
    if (n == 0)
        return;
    
    // Recursive call at the beginning
    printNumbersTail(n - 1);
    // Processing after recursive call
    cout << n << " ";
}

int main() {
    int n = 5;
    
    cout << "Head Recursion Output (prints in descending order): ";
    printNumbersHead(n);
    
    cout << "\nTail Recursion Output (prints in ascending order): ";
    printNumbersTail(n);
    
    cout << "\n\nNote: In head recursion, processing is done before the recursive call,";
    cout << "\nwhile in tail recursion, processing is done after the recursive call.";
    cout << "\nTail recursion is generally more efficient as it can be optimized by compilers.\n";
    
    return 0;
}
