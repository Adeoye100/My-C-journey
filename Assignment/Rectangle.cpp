//
// Created by ad on 13/04/2026.
//

#include <iostream>
using namespace std;

int main() {
    float l, w;

    cout << "Enter the length : ";
    cin >> l;

    cout << "Enter the width : ";
    cin >> w;

    float area = l * w;
    float perimeter = 2 * (area);

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

}
