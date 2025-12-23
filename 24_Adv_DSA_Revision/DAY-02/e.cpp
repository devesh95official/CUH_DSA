#include <iostream>
using namespace std;

/* Print all primes till N (Sieve) */
void primesTillN(int n) {
    bool is_prime[n + 1];
    // storing each number as prime initially
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    // 0 and 1 not prime
    is_prime[0] = false;
    is_prime[1] = false;

    // assign elements as not prime
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] == true) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    // print the prime numbers till n
    for (int i = 0; i <= n; i++) {
        if (is_prime[i] == true)cout << i << " ";
    }
}


int main() {
    int n;
    cin >> n;

    primesTillN(n);

    return 0;
}
