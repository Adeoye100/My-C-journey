//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

// Basic struct - grouping related data
struct Student {
    string name;
    int id;
    double gpa;
};

// Struct with nested structs
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    string name;
    int employeeId;
    Date hireDate;
    double salary;
};

// Struct with methods (hybrid approach)
struct Rectangle {
    double width;
    double height;

    double area() {
        return width * height;
    }

    double perimeter() {
        return 2 * (width + height);
    }
};

int main() {
    // Creating and using a student
    Student student1;
    student1.name = "Timothy";
    student1.id = 1001;
    student1.gpa = 3.85;

    cout << "Student: " << student1.name << endl;
    cout << "ID: " << student1.id << ", GPA: " << student1.gpa << endl;

    // Initialization list (cleaner)
    Student student2 = {"Paul", 1002, 3.92};

    // Employee with nested struct
    Employee emp = {"Peter", 5001, {15, 6, 2023}, 75000.00};
    cout << "\nEmployee: " << emp.name << endl;
    cout << "Hired: " << emp.hireDate.day << "/"
         << emp.hireDate.month << "/" << emp.hireDate.year << endl;

    // Rectangle with methods
    Rectangle rect = {5.0, 3.0};
    cout << "\nRectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    return 0;
}