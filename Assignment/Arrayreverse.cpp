//
// Created by ad on 22/04/2026.
//

#include "iostream"

using namespace std;

int main() {
 int numbers[10];

 cout << "Enter 10 numbers: ";

 for (int i = 0; i < 10; i++) {
  cin >> numbers[i];
 }

 cout << "Reverse Array: ";

 /*! Loops from 9, then last index goes to 0 */

 for (int i = 9; i >= 0; i--) {
  cout << numbers[i] << " ";
 }
 cout << endl;

 return 0;

}
