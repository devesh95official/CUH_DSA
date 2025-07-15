// program to calculate average, mean, and median of a array list of numbers
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int SIZE = 100;
    int numbers[SIZE];
    int n;

    cout << "Enter the number of elements (max " << SIZE << "): ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Calculate average
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    double average = sum / n;
    cout << "Average: " << average << endl;

    // Calculate median
    sort(numbers, numbers + n);
    double median;
    if (n % 2 == 0) {
        median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2;
    } 
    else {
        median = numbers[n / 2];
    }
    cout << "Median: " << median << endl;

    return 0;
}