// simple start pattern line print n stars
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of stars: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

    return 0;
}
// This program prints a line of n stars based on user input.