//
// Created by ad on 05/05/2026.
//
#include "iostream"

using namespace std;

    string concatStrings(string strings1, string strings2) {
        return strings1 + " " + strings2;
    }

int main() {
    string firstName = "Adeoye";
        string lastName = "Opeyemi";
        string fullName = concatStrings(firstName, lastName);

        cout << fullName;



    return 0;
}