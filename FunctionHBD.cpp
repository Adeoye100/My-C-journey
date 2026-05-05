//
// Created by ad on 22/04/2026.
//
#include <iostream>
using namespace std;

    void happyBirthday(string BDayboi, int age) {
        cout << "Happy Birthday To you, " << BDayboi << endl;
        cout << "You're aged: ";
    }

int main() {

        string name = "Ad";
        int age = 20;
        //! Invoking the Function

        // Passed as an argument.
      happyBirthday(name, age);

}

// Also, functions Can be defined outside here, but not declared,
// since the program only executes from the top to bottom.