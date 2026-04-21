//
// Created by ad on 16/04/2026.
//

#include "iostream"
#include "ctime"

using namespace std;

int main() {
    cout << "*** Number Guessing Game ***\n";

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high!\n";
        }else if (guess < num) {
            cout << "Too low!\n";
        }else {
            cout << "Correct guess! # of tries: " << tries << '\n';
        }

    }while (guess != num);

    cout << "** 💫 🎉 **";

}
