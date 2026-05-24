//
// Created by ad on 21/05/2026.
//
#include "iostream"
using namespace std;
/*! Pointers:
 *  variables that stores a memory address of another variable,
 *  making it easier to work with an address.
 */
    // & address-of operator
   /* ! Dereference *:
   * using a pointer or a reference to access the actual
   * data stored at a specific memory address,
   * rather than the address itself.

   ! Or:
   * simply a variable that stores the address of another variable;
    * Variable = a house
    * Value = what’s inside the house
    * Address = the location of the house
    * Pointer = a note that stores that location.
    */

int main() {
    string name = "Bro";
    int age = 21;

    string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizza = freePizzas;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << pFreePizza << endl;

    return 0;
}