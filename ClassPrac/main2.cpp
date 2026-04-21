//
// Created by ad on 15/04/2026.
//
#include "iostream"
#include "unistd.h"
using namespace std;

int main() {

    for ( int i = 1; i <= 103; i++) {
        if (i % 2 == 0) {
            cout << i << endl;

            sleep(1);
        }

    }
    cout << "happy new year \n";
}
