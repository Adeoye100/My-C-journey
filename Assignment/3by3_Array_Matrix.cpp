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

    cout << "Enter 9 numbers for the 3x3 matrix (row by row): \n";

    /*! Input Values:
     * Nested Loops
     */

    for (int i = 0; i < 3; i++) { // Outer loop (i) → rows
        for (int c = 0; c < 3; c++) { // Inner loop (c) → columns
            cin >> matrix[i][c];
        }
    }

    //! Print Diagonal
    cout << "\nThe Main Diagonal elements are: ";

    for (int i = 0; i < 3; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    /*
    *  int x, diagonal;

    cout << "Enter 9 numbers:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> x;
            if (i == j) cout << x << " ";
        }
    }
     */

    return 0;
}