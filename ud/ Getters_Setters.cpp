//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

class CreditCard {
private:
    string cardNumber;
    string holderName;
    double creditLimit;
    double currentBalance;
    int cvv; // Should be private and secure!

public:
    // Constructor
    CreditCard(string number, string name, double limit) {
        setCardNumber(number);
        holderName = name;
        creditLimit = limit;
        currentBalance = 0.0;
        cvv = 123; // In reality, generated securely
    }

    // Getters (accessors) - provide controlled read access
    string getCardNumber() const {
        // Return masked version for security
        return "**** **** **** " + cardNumber.substr(cardNumber.length() - 4);
    }

    string getHolderName() const {
        return holderName;
    }

    double getCreditLimit() const {
        return creditLimit;
    }

    double getCurrentBalance() const {
        return currentBalance;
    }

    double getAvailableCredit() const {
        return creditLimit - currentBalance;
    }

    // Setters (mutators) - provide controlled write access with validation
    void setCardNumber(string number) {
        if(number.length() == 16) {
            cardNumber = number;
        } else {
            cout << "Invalid card number!" << endl;
            cardNumber = "0000000000000000";
        }
    }

    void setCreditLimit(double limit) {
        if(limit >= 500 && limit <= 50000) {
            creditLimit = limit;
            cout << "Credit limit updated to: $" << creditLimit << endl;
        } else {
            cout << "Invalid credit limit!" << endl;
        }
    }

    // Business logic methods
    bool makePurchase(double amount) {
        if(amount > 0 && (currentBalance + amount) <= creditLimit) {
            currentBalance += amount;
            cout << "Purchase of $" << amount << " approved!" << endl;
            return true;
        } else {
            cout << "Transaction declined!" << endl;
            return false;
        }
    }

    void makePayment(double amount) {
        if(amount > 0 && amount <= currentBalance) {
            currentBalance -= amount;
            cout << "Payment of $" << amount << " received!" << endl;
        } else {
            cout << "Invalid payment amount!" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "\n=== Credit Card Info ===" << endl;
        cout << "Holder: " << holderName << endl;
        cout << "Card: " << getCardNumber() << endl;
        cout << "Credit Limit: $" << creditLimit << endl;
        cout << "Current Balance: $" << currentBalance << endl;
        cout << "Available Credit: $" << getAvailableCredit() << endl;
    }
};

// Another example: Temperature converter
class Temperature {
private:
    double celsius;

public:
    Temperature(double temp = 0.0) : celsius(temp) {}

    // Getter for Celsius
    double getCelsius() const {
        return celsius;
    }

    // Getter for Fahrenheit (computed property)
    double getFahrenheit() const {
        return (celsius * 9.0/5.0) + 32;
    }

    // Getter for Kelvin (computed property)
    double getKelvin() const {
        return celsius + 273.15;
    }

    // Setter for Celsius with validation
    void setCelsius(double temp) {
        if(temp >= -273.15) { // Absolute zero check
            celsius = temp;
        } else {
            cout << "Temperature below absolute zero is impossible!" << endl;
        }
    }

    // Setter for Fahrenheit (converts to Celsius internally)
    void setFahrenheit(double temp) {
        double c = (temp - 32) * 5.0/9.0;
        setCelsius(c);
    }

    void display() {
        cout << "\nTemperature:" << endl;
        cout << "Celsius: " << getCelsius() << "°C" << endl;
        cout << "Fahrenheit: " << getFahrenheit() << "°F" << endl;
        cout << "Kelvin: " << getKelvin() << "K" << endl;
    }
};

int main() {
    // Credit card example
    CreditCard myCard("1234567812345678", "David Johnson", 5000.00);
    myCard.displayAccountInfo();

    myCard.makePurchase(1500.00);
    myCard.makePurchase(200.00);
    myCard.makePayment(500.00);

    myCard.displayAccountInfo();

    // Trying to set invalid credit limit
    myCard.setCreditLimit(100000); // Will fail validation

    // Temperature example
    cout << "\n--- Temperature Conversion ---" << endl;
    Temperature temp(25.0);
    temp.display();

    temp.setFahrenheit(98.6); // Human body temperature
    temp.display();

    return 0;
}