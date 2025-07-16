//conditional question
#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "You haven't been born yet?\n";
    } else if (age <= 1) {
        cout << "You're a baby!\n";
    } else if (age <= 3) {
        cout << "You're a toddler.\n";
    } else if (age <= 5) {
        cout << "You're in preschool.\n";
    } else if (age <= 10) {
        cout << "You're a young child.\n";
    } else if (age <= 12) {
        cout << "You're a pre-teen.\n";
    } else if (age <= 15) {
        cout << "You're in early teens.\n";
    } else if (age <= 18) {
        cout << "You're a teenager.\n";
    } else if (age <= 21) {
        cout << "You're a young adult.\n";
    } else if (age <= 29) {
        cout << "You're in your twenties.\n";
    } else if (age <= 39) {
        cout << "You're in your thirties.\n";
    } else if (age <= 49) {
        cout << "You're in your forties.\n";
    } else if (age <= 59) {
        cout << "You're in your fifties.\n";
    } else if (age <= 69) {
        cout << "You're in your sixties.\n";
    } else if (age <= 79) {
        cout << "You're in your seventies.\n";
    } else if (age <= 89) {
        cout << "You're in your eighties.\n";
    } else if (age <= 99) {
        cout << "You're in your nineties.\n";
    } else if (age <= 120) {
        cout << "You're a centenarian!\n";
    } else {
        cout << "Are you immortal or a vampire?\n";
    }

    return 0;
}
// This program categorizes a person's age into different life stages using conditional statements.