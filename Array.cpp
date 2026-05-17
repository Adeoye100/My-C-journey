//
// Created by ad on 09/05/2026.
//
#include "iostream"
int main() {
    using namespace std;

    /*! Array :
     * data structure that can hold multiple values
     * which can be accessed by an index number,
     * "Like a variable holding multiple values ofsame dataype"
     * memory address : 0x7ffe1aeb2300.
    * */

    string cars[] = {"Camaro", "Mustang", "AstonMartin"};

    /* Fixed/static size Data structure
     * string cars[3];
     *
     * cars[0] = "Camaro";
     * cars[1] = "Mustang";
     * cars[2] = "AstonMartin";
     */

    //index number 👇🏾 parking space
    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    return 0;
}