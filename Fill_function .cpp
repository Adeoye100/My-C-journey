//
// Created by ad on 20/05/2026.
//
#include "iostream"

using namespace std;

int main() {
    /*! fill():
     * Fills a  range of elements with a specified value
     * fill(begin, end, value).
     */
    int size = 100;
    string foods[size];


    // ! base:
    // fill(foods, foods + (size/2), "pizza"); // 1st fiffty array display
    // fill(foods + (size/2), foods + size, "peperoni");

    // ! expanding the array's content to display 1/3 of 99 each:
    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "Peperoni");
    fill(foods + (size/3)*2, foods + (size/3)*2, "Burger");

    for (string food: foods) {
    cout << food << endl;
    }

    return 0;
}
