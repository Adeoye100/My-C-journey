//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
    double price;
};

// Pass by value - creates a copy (safe but slower)
void displayCar(Car c) {
    cout << c.year << " " << c.brand << " " << c.model << endl;
    cout << "Price: $" << c.price << endl;
}

// Pass by reference - efficient, can modify original
void applyDiscount(Car& c, double discountPercent) {
    c.price -= c.price * (discountPercent / 100.0);
    cout << "Discount applied! New price: $" << c.price << endl;
}

// Pass by const reference - efficient and safe (best practice)
void printCarDetails(const Car& c) {
    cout << "\n=== Car Details ===" << endl;
    cout << "Brand: " << c.brand << endl;
    cout << "Model: " << c.model << endl;
    cout << "Year: " << c.year << endl;
    cout << "Price: $" << c.price << endl;
    // c.price = 0; // ERROR: cannot modify const reference
}

// Return struct from function
Car createCar(string brand, string model, int year, double price) {
    Car newCar;
    newCar.brand = brand;
    newCar.model = model;
    newCar.year = year;
    newCar.price = price;
    return newCar;
}

int main() {
    Car myCar = {"Toyota", "Camry", 2023, 28000.00};

    displayCar(myCar); // Pass by value

    applyDiscount(myCar, 10); // Pass by reference - modifies original

    printCarDetails(myCar); // Pass by const reference - efficient and safe

    // Creating car from function
    Car sportsCar = createCar("Ferrari", "F8", 2024, 280000.00);
    printCarDetails(sportsCar);

    return 0;
}