#include <iostream>
using namespace std;

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    // Base case
    if (n == 0)
        return 0;
    
    // Recursive case: add last digit to sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    cout << "Sum of Digits using Recursion\n";
    cout << "---------------------------\n";
    
    int numbers[] = {123, 456, 789, 12345};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for(int i = 0; i < size; i++) {
        cout << "Sum of digits in " << numbers[i] << " is: " 
             << sumOfDigits(numbers[i]) << endl;
    }
    
    cout << "\nNote: This program demonstrates how recursion can be used to";
    cout << "\nbreak down a number into its digits and process them.\n";
    
    return 0;
}
