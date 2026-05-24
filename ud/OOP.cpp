//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

// Class definition - encapsulating data and behavior
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string holder, int accNum, double initialBalance) {
        accountHolder = holder;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Methods (behaviors)
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << ". Remaining balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "\n=== Account Information ===" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account #: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    double getBalance() const {
        return balance;
    }
};

// Another class demonstrating OOP principles
class Book {
private:
    string title;
    string author;
    int pages;
    bool isAvailable;

public:
    Book(string t, string a, int p)
        : title(t), author(a), pages(p), isAvailable(true) {}

    void checkout() {
        if(isAvailable) {
            isAvailable = false;
            cout << "\"" << title << "\" has been checked out." << endl;
        } else {
            cout << "Book is not available." << endl;
        }
    }

    void returnBook() {
        isAvailable = true;
        cout << "\"" << title << "\" has been returned." << endl;
    }

    void displayInfo() {
        cout << "\nTitle: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Checked Out") << endl;
    }
};

int main() {
    // Creating objects (instances of classes)
    BankAccount myAccount("John Doe", 12345, 1000.00);
    myAccount.displayAccountInfo();

    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.displayAccountInfo();

    // Book management
    Book book1("The Pragmatic Programmer", "Hunt & Thomas", 352);
    book1.displayInfo();
    book1.checkout();
    book1.displayInfo();
    book1.returnBook();

    return 0;
}