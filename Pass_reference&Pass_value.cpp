//
// Created by ad on 20/05/2026.
//
#include "iostream"

using namespace std;
        //Basically to swap the variables contents with each other
    // passed by reference
void swap(string x, string y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    string x = "Prime";
    string y = "water";
    string temp;

    temp = x;
    x = y;
    y = temp;

    //
    swap(x,y);

    cout << "X: "<< x << endl;
    cout << "Y: "<< y << endl;

    return 0;
}