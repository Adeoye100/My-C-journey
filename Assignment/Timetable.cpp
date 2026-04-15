//
// Created by ad on 13/04/2026.
//
#include <iostream>
#include <iomanip> //! Required setw() to align the table
 using namespace std;
int main() {

    cout << "--- 10 x 10 Multiplication Table ---\n\n";

    // Outer Loop: For the rows
    for (int row = 1; row <= 10; row++) {
        // Inner Loop: for the columns
        for (int col = 1; col <= 10; col++) {

            int product = row * col;

            /*! setw(4) :
            forces each printed number to take exactly 4 spaces.*/

            cout << setw(4) << product;
        }

        /*! Once the inner loop finishes all 10 columns, print a newline
        to drop down to the next row before the outer loop repeats.*/
        std::cout << '\n';
    }

    return 0;
}