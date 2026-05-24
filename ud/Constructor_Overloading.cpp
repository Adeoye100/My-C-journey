//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Pizza {
private:
    string size;
    int toppings;
    bool extraCheese;
    bool deliveryRequired;
    double basePrice;

    void calculatePrice() {
        basePrice = 10.0; // Base price

        if(size == "Medium") basePrice = 15.0;
        else if(size == "Large") basePrice = 20.0;

        basePrice += (toppings * 2.0);
        if(extraCheese) basePrice += 3.0;
        if(deliveryRequired) basePrice += 5.0;
    }

public:
    // Constructor 1: Just size
    Pizza(string s) {
        size = s;
        toppings = 0;
        extraCheese = false;
        deliveryRequired = false;
        calculatePrice();
        cout << "Basic pizza created!" << endl;
    }

    // Constructor 2: Size and toppings
    Pizza(string s, int t) {
        size = s;
        toppings = t;
        extraCheese = false;
        deliveryRequired = false;
        calculatePrice();
        cout << "Pizza with toppings created!" << endl;
    }

    // Constructor 3: Size, toppings, and extra cheese
    Pizza(string s, int t, bool cheese) {
        size = s;
        toppings = t;
        extraCheese = cheese;
        deliveryRequired = false;
        calculatePrice();
        cout << "Deluxe pizza created!" << endl;
    }

    // Constructor 4: The works (all parameters)
    Pizza(string s, int t, bool cheese, bool delivery) {
        size = s;
        toppings = t;
        extraCheese = cheese;
        deliveryRequired = delivery;
        calculatePrice();
        cout << "Supreme pizza with delivery created!" << endl;
    }

    void displayOrder() {
        cout << "\n🍕 Pizza Order:" << endl;
        cout << "Size: " << size << endl;
        cout << "Toppings: " << toppings << endl;
        cout << "Extra Cheese: " << (extraCheese ? "Yes" : "No") << endl;
        cout << "Delivery: " << (deliveryRequired ? "Yes" : "No") << endl;
        cout << "Total Price: $" << basePrice << endl;
    }
};

// Another example: Vector class
class Vector2D {
private:
    double x, y;

public:
    // Default constructor - origin
    Vector2D() : x(0), y(0) {
        cout << "Vector at origin created." << endl;
    }

    // Constructor with same value for both coordinates
    Vector2D(double val) : x(val), y(val) {
        cout << "Uniform vector created." << endl;
    }

    // Constructor with different x and y
    Vector2D(double xVal, double yVal) : x(xVal), y(yVal) {
        cout << "Custom vector created." << endl;
    }

    double magnitude() {
        return sqrt(x * x + y * y);
    }

    void display() {
        cout << "Vector(" << x << ", " << y << ") - Magnitude: " << magnitude() << endl;
    }
};

int main() {
    // Different ways to create pizzas
    Pizza order1("Small");
    order1.displayOrder();

    Pizza order2("Medium", 3);
    order2.displayOrder();

    Pizza order3("Large", 5, true);
    order3.displayOrder();

    Pizza order4("Large", 4, true, true);
    order4.displayOrder();

    cout << "\n--- Vector Examples ---" << endl;
    Vector2D v1;           // (0, 0)
    v1.display();

    Vector2D v2(5);        // (5, 5)
    v2.display();

    Vector2D v3(3, 4);     // (3, 4)
    v3.display();

    return 0;
}