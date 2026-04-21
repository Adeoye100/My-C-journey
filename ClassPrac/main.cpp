//
// Created by ad on 15/04/2026.
//
#include "iostream"

int main() {
    using namespace std;
    int number;

    do {
        cout << "Enter an integer (cannot be 0 and negative): ";
        cin >> number;

        if (number == 0 || number <= 0) {
            cout << "Zero and negative numbers are not allowed. Try again.\n";
        } else {
            // Check even or odd logic

            if (number % 2 == 0) {
                cout << number << " positive and Even.\n";
            } else {
                cout << number << " positive and Odd.\n";
            }
        }
        // Loop continues ONLY if the user entered 0 and negative numbers

    } while (number == 0 || number <= 0);


}
