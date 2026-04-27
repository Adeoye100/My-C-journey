//
// Created by ad on 25/04/2026.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main() {
    // 1. Declare these as arrays with 3 slots
    // string items[3];
    // float prices[3];
    // int quantities[3];
    //
    // char currency = '$';
    // float grandTotal = 0.0f;
    //
    // cout << "<<<-- Supermarket Receipt -->>>\n" << endl;
    //
    // // 2. Wrap the inputs in a loop so the user fills all 3 slots
    // for (int i = 0; i < 3; i++) {
    //     cout << "\nItem #" << (i + 1) << ":" << endl;
    //
    //     cout << "What item would you like to purchase? (single word): ";
    //     cin >> items[i]; // Saves to the array
    //
    //     cout << "What's the price of the item?: ";
    //     cin >> prices[i]; // Saves to the array
    //
    //     cout << "How many would you like?: ";
    //     cin >> quantities[i]; // Saves to the array
    // }
    //
    // cout << "\nProcessing...\n" << endl;
    // sleep(1);
    //
    // cout << fixed << setprecision(2);
    // cout << "====================\n";
    //
    // // 3. Now the array syntax [i] works perfectly here
    // for (int i = 0; i < 3; i++) {
    //     float itemTotal = prices[i] * quantities[i];
    //     grandTotal += itemTotal;
    //
    //     // ANIMATION: Pause for 1 second before printing the line
    //     sleep(1);
    //
    //     cout << quantities[i] << " " << items[i]
    //          << " @ $" << prices[i]
    //          << " = $" << itemTotal << endl;
    // }
    //
    // sleep(1); // Final pause before the total
    // cout << "--------------------" << endl;
    // cout << "GRAND TOTAL: $" << grandTotal << endl;
    // cout << "Have a Nice day, we Love you!" << endl;

    /* * Array format:
    *
    const int SIZE = 3; // Number of items to buy
    string items[SIZE];
    float prices[SIZE];
    int quantities[SIZE];

    char currency = '$';
    float grandTotal = 0.0f;

    // Loop 1: Data Entry
    for (int i = 0; i < SIZE; i++) {
        cout << "\n--- Item #" << (i + 1) << " ---" << endl;

        cout << "What item would you like?: ";
        // Use cin.ignore() ONLY if there is a newline left in the buffer
        if (i > 0) cin.ignore();
        getline(cin, items[i]);

        cout << "Price of " << items[i] << ": ";
        cin >> prices[i];

        cout << "Quantity: ";
        cin >> quantities[i];
    }

    // Loop 2: Processing and Display
    cout << "\n" << string(40, '=') << endl;
    cout << left << setw(15) << "ITEM" << setw(10) << "PRICE" << setw(10) << "QTY" << "TOTAL" << endl;
    cout << string(40, '-') << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < SIZE; i++) {
        float itemTotal = prices[i] * quantities[i];
        grandTotal += itemTotal;

        cout << left << setw(15) << items[i]
             << currency << setw(9) << prices[i]
             << setw(10) << quantities[i]
             << currency << itemTotal << endl;
    }

    cout << string(40, '-') << endl;
    cout << "GRAND TOTAL: " << currency << grandTotal << endl;
    cout << string(40, '=') << endl;

     */
    //* Or, more Simpler:
    // Parallel arrays to hold data for 3 items
    string items[3];
    float prices[3];
    int quantities[3];

    float grandTotal = 0.0f;

    // Phase 1: Data Entry Loop
    for (int i = 0; i < 3; i++) {
        cout << "\n--- Item " << (i + 1) << " ---" << endl;

        cout << "Enter item name (single word): ";
        cin >> items[i];

        cout << "Enter price: $";
        cin >> prices[i];

        cout << "Enter quantity: ";
        cin >> quantities[i];
    }

    // Phase 2: Processing and Display Loop
    cout << "\n=== YOUR RECEIPT ===" << endl;

    for (int i = 0; i < 3; i++) {
        // Calculate the total for this specific item
        float itemTotal = prices[i] * quantities[i];

        // Add it to the final bill
        grandTotal = grandTotal + itemTotal;

        // Print a simple sentence for each item
        cout << quantities[i] << " " << items[i]
             << " @ $" << prices[i]
             << " each = $" << itemTotal << endl;
    }

    cout << "--------------------" << endl;
    cout << "GRAND TOTAL: $" << grandTotal << endl;


    return 0;
}