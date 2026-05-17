//
// Created by ad on 17/05/2026.
//
#include "iostream"

/*sizeof() = determines the size of a:
 *              variable, data type, class, objects, etc. */


using namespace std;

int main() {
                    // size of where the Dtype is located.
    double gpa = 5.0; // 8
    string name = "Adeoye is an ADept"; // 32
    char grade[] = {'A', 'B'}; // 1
    string students [] = {"Emma", "Jola", "John"};
    char grades[] = {'A','B','C','D','E','F'};

    cout << sizeof(gpa) << " bytes"<< endl;
    cout << sizeof(name) << " bytes"<< endl; // reference data type = Won't return any more than 32 byte even when string content increases.
    cout << sizeof(grade) << " bytes"<< endl;
    // cout << sizeof(student) << " bytes"<< endl;
    cout << sizeof(grades) << endl;

    cout << sizeof(students)/sizeof(string) << endl;
    // cout << sizeof(grades)/sizeof(grade) << " elements\n"; // Arrays can also be divided by another variable property, depending on their respective contents.

    return 0;
}