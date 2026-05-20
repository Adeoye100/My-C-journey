//
// Created by ad on 17/05/2026.
//
#include "iostream"

using namespace std;

double getTotal(double prices[], int size);

int main() {
    /*! ForEach Loop:
     ~ loop that eases the traversal over an
     ~ iteratable data set, less syntax involved in 
     *
     */


    // // string students[] =  {"Sponge", "Patrick", "Sandy", "Squidward", "Mr Krab"};
    // int grades[] = {72, 64, 80, 85, 90, 95};
    //
    // // for (string student : students) {
    // //     cout << student << endl;
    // // }
    //
    // for (int grade : grades) {
    //          cout << grade << endl;
    // }

    double prices[] = {5.0, 25.0, 75.5, 250.5};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "$" << total << endl;

    return 0;
}
                //Decays into an argument
double getTotal(double prices[], int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += prices[i]; // total =  total +  prices[i];
    }

    return total;
}