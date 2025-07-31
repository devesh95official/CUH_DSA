// program to compare std::array and std::vector
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
    // Creating a std::array
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Creating a std::vector
    vector<int> vec = {1, 2, 3, 4, 5};

    // Comparing sizes
    std::cout << "Size of std::array: " << arr.size() << std::endl;
    std::cout << "Size of std::vector: " << vec.size() << std::endl;

    // Accessing elements
    std::cout << "Element at index 2 in std::array: " << arr[2] << std::endl;
    std::cout << "Element at index 2 in std::vector: " << vec[2] << std::endl;

    // Modifying elements
    arr[2] = 10;
    vec[2] = 10;

    std::cout << "Modified element at index 2 in std::array: " << arr[2] << std::endl;
    std::cout << "Modified element at index 2 in std::vector: " << vec[2] << std::endl;

    return 0;
}
// Output the sizes and modified elements of std::array and std::vector