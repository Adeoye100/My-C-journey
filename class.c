#include <stdio.h>

/**
 * @brief Calculates the total amount of money in a piggy bank
 * based on the count of half-dollars, quarters, dimes, nickels, and pennies.
 *
 * The values are:
 * Half-dollar: $0.50
 * Quarter:     $0.25
 * Dime:        $0.10
 * Nickel:      $0.05
 * Penny:       $0.01
 */
int main() {
    // Declare integer variables to store the count of each coin type
    int num_half_dollars;
    int num_quarters;
    int num_dimes;
    int num_nickels;
    int num_pennies;

    // Declare a double variable to store the total amount in dollars
    double total_amount_dollars;

    // --- Input and Assignment for Test Values ---
    // The problem specifies the following test values:
    // 11 half-dollars, 7 quarters, 3 dimes, 12 nickels, and 17 pennies.
    num_half_dollars = 11;
    num_quarters = 7;
    num_dimes = 3;
    num_nickels = 12;
    num_pennies = 17;

    // --- Calculation ---
    // Calculate the total value in dollars.
    // The number of coins is cast to 'double' for the calculation to ensure
    // accurate floating-point arithmetic.

    total_amount_dollars = (num_half_dollars * 0.50) +
                           (num_quarters * 0.25) +
                           (num_dimes * 0.10) +
                           (num_nickels * 0.05) +
                           (num_pennies * 0.01);

    // --- Output ---
    printf("--- Piggy Bank Calculator ---\n");
    printf("Coin Counts:\n");
    printf("Half-dollars: %d\n", num_half_dollars);
    printf("Quarters:     %d\n", num_quarters);
    printf("Dimes:        %d\n", num_dimes);
    printf("Nickels:      %d\n", num_nickels);
    printf("Pennies:      %d\n", num_pennies);
    printf("-------------------------------\n");

    // Print the final result, formatted to two decimal places (standard for currency)
    printf("The total amount of money in the piggy bank is: $%.2f\n", total_amount_dollars);

    return 0;
}