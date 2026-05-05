//
// Created by ad on 05/05/2026.
//
#include "iostream"
// sharing same name but of different parameters.

using namespace std;

void makeEba() {
    cout << "Here's your Hot Eba" << endl;
}

void makeEba(string topping1) {
    cout << "Here's your Hot Eba with " << topping1 << endl;
}

void makeEba(string topping1, string topping2) {
    cout << "Here's your Hot Eba with " << topping1 <<" and "<< topping2<< endl;
}

int main() {

    // makeEba(""); - without anything.
    makeEba("Egusi", "Assorted");


    return 0;
}