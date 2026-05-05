//
// Created by ad on 05/05/2026.
//
#include "iostream"

using namespace std;

double cube(double length) {
    return length * length * length;
}


double square(double length) {
    return length * length;
}

int main() {
    /*! Return:
     * returns a value back to the spot,
     * where you caled the encoding function
    */

    double length = 5.0;
    double area = square(length), volume = cube(length);

    cout << "Area : " << area << "cm^2"<< endl;
    cout << "Volume : " << volume << "cm^3" << endl;

    return 0;
}

