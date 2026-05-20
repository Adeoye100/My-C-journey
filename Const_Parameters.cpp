//
// Created by ad on 20/05/2026.
//
#include "iostream"
using namespace std;

    //Making the properties unchangeable.
void printInfo(const string name, const int age) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    string name = "Bro";
    int age = 22;

    printInfo(name, age);
    return 0;
}