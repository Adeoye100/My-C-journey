//
// Created by ad on 24/05/2026.
//
#include <iostream>
using namespace std;

int main() {
    // Single variable allocation
    int* singlePtr = new int(100);
    cout << "Dynamic single value: " << *singlePtr << endl;
    delete singlePtr; // Always clean up!
    singlePtr = nullptr;

    // Array allocation - the builder's approach
    int size;
    cout << "How many elements? ";
    cin >> size;

    int* dynamicArray = new int[size];

    // Initialize and use
    for(int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    cout << "Dynamic array contents: ";
    for(int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    delete[] dynamicArray; // Note the brackets for arrays!
    dynamicArray = nullptr;

    // Modern C++ approach (prefer this in production)
#include <memory>
    unique_ptr<int[]> modernArray(new int[size]);
    // Automatically cleaned up - no manual delete needed!

    return 0;
}