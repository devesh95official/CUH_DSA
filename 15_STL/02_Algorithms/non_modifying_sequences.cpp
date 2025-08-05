#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    
    // all_of, any_of, none_of
    bool all_odd = all_of(numbers.begin(), numbers.end(), isOdd);
    bool any_odd = any_of(numbers.begin(), numbers.end(), isOdd);
    bool none_odd = none_of(numbers.begin(), numbers.end(), isOdd);
    
    cout << "All odd? " << (all_odd ? "Yes" : "No") << endl;
    cout << "Any odd? " << (any_odd ? "Yes" : "No") << endl;
    cout << "None odd? " << (none_odd ? "Yes" : "No") << endl;
    
    // equal and mismatch
    bool is_equal = equal(vec2.begin(), vec2.end(), numbers.begin());
    cout << "\nVectors are equal? " << (is_equal ? "Yes" : "No") << endl;
    
    auto mismatch_pair = mismatch(vec2.begin(), vec2.end(), numbers.begin());
    if(mismatch_pair.first != vec2.end()) {
        cout << "First mismatch: " << *mismatch_pair.first 
             << " and " << *mismatch_pair.second << endl;
    }
    
    // Search operations
    vector<int> pattern = {3, 4, 5};
    auto it = search(numbers.begin(), numbers.end(), 
                    pattern.begin(), pattern.end());
    
    if(it != numbers.end()) {
        cout << "\nPattern found at position: " 
             << (it - numbers.begin()) << endl;
    }
    
    // Find adjacent duplicates
    auto adjacent_it = adjacent_find(numbers.begin(), numbers.end());
    if(adjacent_it != numbers.end()) {
        cout << "Adjacent duplicate found: " << *adjacent_it << endl;
    } else {
        cout << "No adjacent duplicates found" << endl;
    }
    
    // Create a vector with some duplicates
    vector<int> with_duplicates = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    
    // Count unique elements
    auto last = unique(with_duplicates.begin(), with_duplicates.end());
    cout << "\nAfter removing adjacent duplicates:" << endl;
    for(auto it = with_duplicates.begin(); it != last; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
