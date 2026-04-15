#include <iostream>
using namespace std;

int main() {
    int number;

    do {
        cout << "Enter an integer (cannot be 0): ";
        cin >> number;

        if (number == 0) {
            cout << "Zero is not allowed. Try again.\n";
        } else {
            // Check even or odd logic
            if (number % 2 == 0) {
                cout << number << " is Even.\n";
            } else {
                cout << number << " is Odd.\n";
            }
        }

        // Loop continues ONLY if the user entered 0
    } while (number == 0);

    return 0;
}