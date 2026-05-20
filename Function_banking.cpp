//
// Created by ad on 05/05/2026.
//
#include "iostream"
#include "iomanip"

using namespace std;

void showbalance(double balance) {
    cout << "Your balance is: $" << setprecision(10) << balance << endl;

}
double deposit() {

    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0) {
        return amount;
    }else {
        cout << "That's not a valid amount: \n";
        return 0;
    }

   // return amount;
}

double withdraw(double balance) {

    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (amount > balance) {
        cout << "insufficient balance\n";
        return 0;
    }else if (amount < 0){
        cout << "That's not a valid amount: \n";
        return 0;
    }else {
        return amount;
    }
}

int main() {
        double balance = 0;
        int choice = 0;


  do {

      cout << "\n ***********************\n";
      cout << "Enter your choice: \n";
      cout << "***********************\n";
      cout << "1. Show Balance\n";
      cout << "2. Deposit\n";
      cout << "3. Withdraw\n";
      cout << "4. Exit\n";
      cin >> choice;

      // cin.clear();
      // fflush(stdin);

      cin.clear(); // Clear error flags
      cin.ignore(10000, '\n'); // Discard bad characters up to the next newline

      switch (choice) {
          case 1:
              showbalance(balance);
              break;

          case 2:
              balance += deposit(); // or balance = balance + deposit();
              showbalance(balance);
              break;

          case 3:
              balance -= withdraw(balance);
              showbalance(balance);
              break;

          case 4:
              cout << "Thank you for using our service";
              break;

          default:
              cout << "Invalid choice, please enter an option(1-4)";
      }
  }while (choice != 4);

    return 0;
}