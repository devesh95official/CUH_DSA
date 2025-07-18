// use ascii values for sum
#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;
    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;

    int sum = int(ch1) + int(ch2);
    cout << "Sum of ASCII values: " << sum << endl;

    return 0;
}
