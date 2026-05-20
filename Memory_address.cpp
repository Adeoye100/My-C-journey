//
// Created by ad on 20/05/2026.
//
#include "iostream"

using namespace std;
/*! Memory Address:
 * A location in memory where data is stored a memory address
 * can be accessed with  "&" (address-of-operator).
 */
int main() {
    /* # i.e:
    * string took 4 bit of the memory
    * int took
 */

    string name = "Bro";
    int age = 21;
    bool student = true;

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;

    return 0;
}