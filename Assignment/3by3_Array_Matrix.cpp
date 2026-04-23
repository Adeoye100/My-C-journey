//
// Created by ad on 22/04/2026.
//
#include <iostream>
using namespace std;

int main() {
    /*! i.e
     * Matrix[row][column]
     */
    int matrix[3][3];

    cout << "Enter 9 numbers for the 3x3 matrix (row by row):\n";
    /*! Input Values:
     * Nested Loops
     */

    for (int i = 0; i < 3; i++) { // Outer loop (i) → rows
        for (int j = 0; j < 3; j++) { // Inner loop (j) → columns
            cin >> matrix[i][j];
        }
    }

    //! Print Diagonal
    cout << "\nThe Main Diagonal elements are: ";
    for (int i = 0; i < 3; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}