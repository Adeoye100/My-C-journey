//
// Created by ad on 22/04/2026.
//
#include <iostream>
using namespace std;

int main() {
    // int n;
    // int evenCount = 0, oddCount = 0;
    //
    // /*! Determines the size  of the array, as per user input */
    // cout << "Enter the array amount/size : ";
    // cin >> n;
    //
    // /*! arr -
    //  * a pointer to store an address in the memory.
    //  * Reserve space in memory for n integers.
    // */
    //
    // int* arr = new int[n];
    //
    // /* ! Loop runs n times
    // * Stores each number in the array
    //  */
    //
    // cout << "Enter the " << n << " numbers:\n";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    //
    //     if (arr[i] % 2 == 0) {
    //         evenCount++;
    //     } else {
    //         oddCount++;
    //     }
    // }
    //
    // cout << "\nTotal Even numbers: " << evenCount << endl;
    // cout << "Total Odd numbers: " << oddCount << endl;
    //
    // //! Clean up memory
    // delete[] arr;

    int even = 0, odd = 0, num = 0, n = 0;

    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
          }
      }

      cout << "Total Even: " << even << "\nTotal Odd: " << odd << endl;

    return 0;
}