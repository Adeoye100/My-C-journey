#include <iostream>
using namespace std;

class Animal {
public:
    string name;

    void eat() {
        cout << name << " eats" << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    void inputData() {
        cout << "Enter dog's name: ";
        cin >> name;

        cout << "Enter dog's breed: ";
        cin >> breed;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog Dog1;

    Dog1.inputData();
    Dog1.displayData();
    Dog1.eat();

    return 0;
}