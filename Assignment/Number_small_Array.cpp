//
// Created by ad on 22/04/2026.
//
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Assume the first element is the smallest to start
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update smallest if a lower number is found
        }
    }

    cout << "The smallest number is: " << smallest << endl;

    delete[] arr;
    return 0;
}

