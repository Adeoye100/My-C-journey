//
// Created by ad on 13/04/2026.
//
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {


    for (int i = 10; i > 0; i--) {

        sleep(1);
        cout << i << endl;
    }

    cout << "Happy new year " << "!\n";

    return 0;

}