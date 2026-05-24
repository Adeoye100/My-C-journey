//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

// Generic swap - works with any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Generic maximum finder
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template with multiple types
template <typename T, typename U>
void displayPair(T first, U second) {
    cout << "First: " << first << ", Second: " << second << endl;
}

// Advanced: Template class for a generic array
template <typename T>
class Array {
private:
    T* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new T[size];
    }

    ~Array() {
        delete[] data;
    }

    void set(int index, T value) {
        if(index >= 0 && index < size)
            data[index] = value;
    }

    T get(int index) {
        return (index >= 0 && index < size) ? data[index] : T();
    }
};

int main() {
    // Works with integers
    int x = 5, y = 10;
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    swapValues(x, y);
    cout << "After swap: x=" << x << ", y=" << y << endl;

    // Works with strings
    string a = "Hello", b = "World";
    swapValues(a, b);
    cout << "Swapped strings: " << a << ", " << b << endl;

    // Maximum works universally
    cout << "Max of 100 and 50: " << getMax(100, 50) << endl;
    cout << "Max of 'z' and 'a': " << getMax('z', 'a') << endl;

    // Mixed type pairs
    displayPair(42, "The Answer");
    displayPair(3.14, true);

    // Generic array
    Array<string> names(3);
    names.set(0, "David");
    names.set(1, "Solomon");
    names.set(2, "Moses");
    cout << "Name at index 1: " << names.get(1) << endl;

    return 0;
}