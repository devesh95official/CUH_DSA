#include <iostream>

using namespace std;

int main() {
    int age, bmi, chronic_conditions;
    cin >> age >> bmi >> chronic_conditions;

    if (age >= 60 and bmi >= 30 and chronic_conditions >= 2)cout << "High Risk";
    else if (age >= 60 and bmi >= 30)cout << "Moderate Risk";
    else if (age >= 60 and chronic_conditions >= 1)cout << "Moderate Risk";
    else if (age >= 60) cout << "Low Risk";
    else if (40 <= age && age < 60) {
        if (bmi >= 25) {
            if (chronic_conditions >= 2) {
                cout << "Moderate Risk";
            }
            else {
                cout << "Low Risk";
            }
        }
        else {
            cout << "Low Risk";
        }
    }
    else if (age < 40) {
        if (bmi >= 28) {
            if (chronic_conditions >= 1) {
                cout << "Moderate Risk";
            }
            else {
                cout << "Low Risk";
            }
        }
        else {
            cout << "Very Low Risk";
        }
    }
    return 0;
}