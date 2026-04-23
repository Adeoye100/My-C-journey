//
// Created by ad on 22/04/2026.
//
#include <iostream>
#include <algorithm> // Required to use the sort() function

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

    // Sorts the array from the first element to the last
    sort(arr, arr + n);

    cout << "\nSorted array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}