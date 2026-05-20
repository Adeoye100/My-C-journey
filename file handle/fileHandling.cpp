//
// Created by ad on 20/05/2026.
//

#include "iostream"
#include "fstream"

using namespace std;

int main() {

    ofstream file("student.txt");
    file << "Bola 10 89\n";
    file << "James 15 99\n";

    file.close();
    cout << "file synced successfully 👌🏾\n";

    return 0;
}