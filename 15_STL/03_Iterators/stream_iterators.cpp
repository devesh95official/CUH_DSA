#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    // Using stream iterators
    cout << "Enter numbers (press Ctrl+Z on Windows or Ctrl+D on Unix to end):" << endl;
    
    // Read numbers from standard input
    istream_iterator<int> input_iterator(cin);
    istream_iterator<int> eof;
    
    vector<int> numbers(input_iterator, eof);
    
    // Sort the numbers
    sort(numbers.begin(), numbers.end());
    
    // Output using ostream_iterator
    cout << "\nSorted numbers:" << endl;
    ostream_iterator<int> output_iterator(cout, " ");
    copy(numbers.begin(), numbers.end(), output_iterator);
    cout << endl;
    
    // Using back_inserter
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    
    // Append vec2 to vec1
    copy(vec2.begin(), vec2.end(), back_inserter(vec1));
    
    cout << "\nAfter using back_inserter:" << endl;
    for(int num : vec1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
