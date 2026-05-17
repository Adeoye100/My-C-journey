//
// Created by ad on 17/05/2026.
//
#include "iostream"

using namespace std;

int main() {

    // string students[] =  {"Sponge", "Patrick", "Sandy", "Squidward", "Mr Krab"};
    //
    // for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) { // OR: int i = 0; i < 5; i++, was not used due to fixed array size.
    //     cout << students[i] << endl;
    // }

    char grades[] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++) { // OR: int i = 0; i < 5; i++, was not used due to fixed array size.
             cout << grades[i] << endl;
         }


    return 0;
}