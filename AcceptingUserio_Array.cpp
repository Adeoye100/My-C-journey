//
// Created by ad on 20/05/2026.
//
#include "iostream"

using namespace std;

int main() {

    string foods[5]; // Dynamic Array input
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for (int i = 0; i < size; i++) {
        cout << "Enter a food you like # or 'q' to quit(to discontinue choice) " << i + 1 << ": ";
        getline(cin, temp);

        if (foods[i] == "q") {
            break;
        }else {
            foods[i] = temp;
        }
    }

    cout  << "\n you like the following food:  \n";

    for (int i = 0; !foods[i].empty(); i++) {
        cout << foods[i] << endl;
    }

    return 0;
}