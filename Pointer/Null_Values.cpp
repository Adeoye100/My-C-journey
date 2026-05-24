//
// Created by ad on 23/05/2026.
//
#include "iostream"
using namespace std;
        /*! Null Values =
         *              A special value that means smt has no value,
         *              when a pointer is holding a null value,
         *              that pointer is not pointing at anything.
         *
         ! Null Pointer =
         *              Keyword represent a null pointer literal.
         *              Nullptrs are useful  when determining if an  address
         *              was successfully assigned to a pointer.
         *
*              Concept,   |  The Analogy,                           |       The C++ Reality

        Variable (name),  |  A house.,                             |       A block of memory.
        Address (&name),  | The GPS coordinates of that house.,    |      "A hexadecimal memory location (e.g., 0x100)."

      "Value (""Bro"")",  |  The person living inside the house.,  |    The data stored in the memory block.

        Pointer (pName),  | Another house whose only resident is    |      A separate memory block that stores a hexadecimal address.
                          | a piece of paper with GPS coordinates on it.,

    Dereference (*pName), |  Driving to the GPS coordinates written on  |  Reading the value at the target memory location.
                          |  the paper and seeing who lives there.,     |
         */

int main() {

    int* ptr = nullptr; // Always initialize to nullptr
    int value = 10;

    // Safe navigation - checking before dereferencing
    if (ptr == nullptr) {
        cout << "Pointer is null - avoiding disaster!\n";
        ptr = &value; // Now assign a valid address
    }

    if (ptr != nullptr) {
        cout << "Safe to use: " << *ptr << endl;
    }

    // Professional practice: Delete and nullify
    int* dynamicPtr = new int(42);
    delete dynamicPtr;
    dynamicPtr = nullptr; // Prevent dangling pointer

    return 0;


}