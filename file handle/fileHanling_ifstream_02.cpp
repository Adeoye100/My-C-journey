//
// Created by ad on 20/05/2026.
//

#include "iostream"
#include "fstream"

using namespace std;


int main() {

    ifstream file("student.txt");
    string name;
    int age;
    int score;

    while (file >> name  >> age >> score) {
        cout << name << " " << age << " " << score << endl;
    }

    file.close();
    cout << "file created \n";


    return 0;
}
