//
// Created by ad on 15/04/2026.
//
#include "iostream"
#include "ctime"
using namespace std;

int main() {
    /*! pseudo-random:
    * closely generate random numbers.
    */

    // srand(time(NULL));
    //
    // int num1 = (rand() % 6) + 1;
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 6) + 1;
    //
    // cout  << num1 << '\n';
    // cout  << num2 << '\n';
    // cout  << num3 << '\n';

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum) {
        case 1: cout << "Study the word";
            break;

        case 2: cout << "Code";
            break;

        case 3: cout << "Note Review";
            break;

        case 4: cout << "Learn Cpp";
            break;

        case 5: cout << "Go for a break";
            break;

    //     default:
    //         cout << "Invalid number(enter 1-5)";
    //
    }

    return 0;
}
