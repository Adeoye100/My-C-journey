//
// Created by ad on 25/04/2026.
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string item;
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    cout << "What item would you like to purchase?: ";
    getline(cin, item);

    cout << "What's the price of the item?: ";
    cin >> price;

    cout << "How many would you like?: ";
    cin >> quantity;

    total = price * quantity;

    /* ! setprecision(2):
   * replace the C-style "%.2f" */

    cout << fixed << setprecision(2);

    cout << "\nYou have bought " << quantity << " " << item << "(s)" << endl;
    cout << "The Total is: " << currency << total << endl;

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
/*! Or, more Simpler:
    * // Parallel arrays to hold data for 3 items
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
 */

    return 0;
}