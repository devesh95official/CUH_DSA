// program to find largest of 5 numbers by if else

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    if (a > b && a > c && a > d && a > e) {
        cout << "Largest number is: " << a << endl;
    } else if (b > c && b > d && b > e) {
        cout << "Largest number is: " << b << endl;
    } else if (c > d && c > e) {
        cout << "Largest number is: " << c << endl;
    } else if (d > e) {
        cout << "Largest number is: " << d << endl;
    } else {
        cout << "Largest number is: " << e << endl;
    }

    return 0;
}
// This program finds the largest of five numbers using if-else statements.