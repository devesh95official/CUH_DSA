#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Using for_each
    cout << "Original numbers:" << endl;
    for_each(numbers.begin(), numbers.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;
    
    // Using transform to square each number
    vector<int> squared(numbers.size());
    transform(numbers.begin(), numbers.end(), squared.begin(), 
             [](int n) { return n * n; });
    
    cout << "\nSquared numbers:" << endl;
    for(int num : squared) {
        cout << num << " ";
    }
    cout << endl;
    
    // Using count_if to count even numbers
    int evenCount = count_if(numbers.begin(), numbers.end(), isEven);
    cout << "\nNumber of even numbers: " << evenCount << endl;
    
    // Using accumulate to sum all numbers
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of all numbers: " << sum << endl;
    
    // Using remove_if to remove even numbers (creates a new end iterator)
    auto newEnd = remove_if(numbers.begin(), numbers.end(), isEven);
    
    cout << "\nAfter removing even numbers:" << endl;
    for_each(numbers.begin(), newEnd, [](int n) {
        cout << n << " ";
    });
    cout << endl;
    
    return 0;
}
