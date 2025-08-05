#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {10, 20, 30, 40, 50};
    vector<int> result(5);
    
    // Using transform with binary operation
    transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(),
             plus<int>());
    
    cout << "Vector addition result:" << endl;
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    // Partial sum
    vector<int> partial_sums(5);
    partial_sum(vec1.begin(), vec1.end(), partial_sums.begin());
    
    cout << "\nPartial sums:" << endl;
    for(int num : partial_sums) {
        cout << num << " ";
    }
    cout << endl;
    
    // Inner product
    int inner_prod = inner_product(vec1.begin(), vec1.end(), 
                                 vec2.begin(), 0);
    cout << "\nInner product: " << inner_prod << endl;
    
    // Adjacent difference
    vector<int> adj_diff(5);
    adjacent_difference(vec1.begin(), vec1.end(), adj_diff.begin());
    
    cout << "\nAdjacent differences:" << endl;
    for(int num : adj_diff) {
        cout << num << " ";
    }
    cout << endl;
    
    // Iota - Fill with sequential values
    vector<int> sequence(5);
    iota(sequence.begin(), sequence.end(), 10);  // Start from 10
    
    cout << "\nSequential values:" << endl;
    for(int num : sequence) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
