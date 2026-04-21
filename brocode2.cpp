//
// Created by ad on 15/04/2026.
//
#include "iostream"

using namespace std;

int main() {
    int rows;
    int columns;
    char symbols;

    cout << "Enter the row's number: ";
    cin >> rows;

    cout << "Enter the column's number: ";
    cin >> columns;

    cout << "Enter your desired: ";
    cin >> symbols;

   for (int i = 1; i <= rows; i++) {
       for (int j = 1; j <= columns; j++) {
           cout << symbols;
       }
       cout << endl;
   }

}
