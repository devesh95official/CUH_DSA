// program to find the prime divisors of a number
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime divisors of " << num << " are: ";
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
