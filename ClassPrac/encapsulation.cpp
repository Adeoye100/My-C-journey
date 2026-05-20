//
// Created by ad on 18/05/2026.
//
#include "iostream"
using namespace std;

class BankAccount {
private:
    double balance;
    string accountNumber;
public:
    void inputData() {
    cout << "Enter your balance: ";
    cin >> balance;
    }
    void Deposit(double amount) {
        balance += amount;
    }

    void displyData() {
        cout <<  accountNumber;
        cout << balance;
    }
};

int main() {


}