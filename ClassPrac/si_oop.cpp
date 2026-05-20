//
// Created by ad on 18/05/2026.
//
#include "iostream"

using namespace std;

class SI{
private:
    float p, r,t;
    public:
    void inputData() {
        cout << "Enter your principal: ";
        cin >> p;

        cout << "Enter your rate: ";
        cin >> r;

        cout << "Enter your time: ";
        cin >> t;
    }

    void displayData() {
        cout << "*** simple interest: " << endl;
        double SI = (p*r*t)/100;

        cout << SI << endl;
    }

};

int main() {
    SI SI1;
    SI1.inputData();

    SI1.displayData();
    return 0;

}