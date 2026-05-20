//
// Created by ad on 18/05/2026.
//

#include "iostream"

using namespace std;

class Student {
private:
    string name;
    int age;
    float score;

public:
    void inputData() {
        cout << "Enter your name: ";
        cin >> name;

        cout << "Enter your age: ";
        cin >> age;

        cout << "Enter your score: ";
        cin >> score;

    }

    void displayData() {
        cout << "*** student Details: " << endl;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "score: " << score << endl;
    }
};

int main() {
    Student student1;
    student1.inputData();

    student1.displayData();
    return 0;

}