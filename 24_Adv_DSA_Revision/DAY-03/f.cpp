#include <iostream>
using namespace std;

/* Check Boston Number */
int digitSum(int x) {
    int sum = 0;
    while (x > 0)sum += (x % 10), x /= 10;
    return sum;
}

bool isBoston(int n) {
    int sum = digitSum(n);
    int primeSum = 0;

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0)primeSum += digitSum(i), n /= i;
    }

    if (n > 0)primeSum += digitSum(n);


    if (sum == primeSum)return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    if (isBoston(n)) cout << "Boston Number\n";
    else cout << "Not Boston Number\n";
}