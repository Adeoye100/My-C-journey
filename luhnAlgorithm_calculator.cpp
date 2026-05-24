//
// Created by ad on 20/05/2026.
//
#include <iostream>
#include <string>
#include <cctype> // Required for isdigit()

using namespace std;

/*! Luhn Algorithm steps:
 * 1. Double every 2nd digit from right to left, if the number is > 9, minus 9 from it.
 * 2. Add all the numbers (including the 2nd numbers).
 * 3. IF the sum is divisible by 10, # is valid.

 # Use cases:
 * Credit/Debit cards, SIM Cards, Social Insurance/Security, IMEI Numbers, etc.
 */

// Splits a 2-digit number and adds its digits together (e.g., 18 becomes 1 + 8 = 9)
int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}

// Sums the 1st, 3rd, 5th, etc. digits from right to left
int sumOddDigits(string cardNumber) {
    int sum = 0;

    // Start at the very last digit (size - 1) and step backward by 2
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += (cardNumber[i] - '0'); // Convert char to int
    }
    return sum;
}

// Sums the 2nd, 4th, 6th, etc. digits from right to left (doubled)
int sumEvenDigits(string cardNumber) {
    int sum = 0;

    // Start at the second to last digit (size - 2) and step backward by 2
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}

int main() {
    string rawInput;
    string cardNumber = "";
    int result = 0;

    cout << "Enter a credit #: ";

    // 1. Use getline to capture spaces if the user types them
    getline(cin, rawInput);

    // 2. Clean the string: extract ONLY numbers and ignore spaces/dashes/letters
    for (char c : rawInput) {
        if (isdigit(c)) {
            cardNumber += c; // Build a new string of just the digits
        }
    }

    // Edge case: Ensure they actually typed some numbers
    if (cardNumber.empty()) {
        cout << "No valid numbers entered.\n";
        return 0;
    }

    // Step 2: Add all the processed numbers together
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    // Step 3: Check if the total sum is divisible by 10
    if (result % 10 == 0) {
        cout << "The card number is VALID.\n";
    } else {
        cout << "The card number is INVALID.\n";
    }

    return 0;
}