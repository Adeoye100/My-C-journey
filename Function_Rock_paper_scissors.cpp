//
// Created by ad on 06/05/2026.
//
#include "iostream"
#include "ctime"

using namespace std;

char getUserChoice() {

    char player;
    cout << "\n******************************\n";
    cout << "\n /* Rock-Paper-Scissors Game */ \n";

    do {
        cout << "Choose one of the following\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    cout << player;
    return player;
}

// void getComputerChoice(char player);
char getComputerChoice();

void showChoice(char choice) {
    switch (choice) {
        case 'r':
            cout  << "Rock \n";
            break;

        case 'p':
            cout  << "Paper \n";
            break;

        case 's':
            cout  << "Scissors \n";
            break;
    }
}
void chooseWinner(char player, char computer) {

    switch (player) {
        case 'r':
            if (computer == 'r') {
                cout << "It's a tie \n";
            }else if (computer == 'p') {
                cout << "You lose";
            }else {
                cout << "You win! \n";
            }
            break;

        case 'p':
            if (computer == 'r') {
                cout << "You win!\n";
            }else if (computer == 'p') {
                cout << "It's a tie \n";
            }else {
                cout << "You lose! \n";
            }
            break;
        case 's':
            if (computer == 'r') {
                cout << "You lose \n";
            }else if (computer == 'p') {
                cout << "You win!";
            }else {
                cout << "It's a tie \n";
            }
            break;
        default:
            cout << " ********* \n";
    }

}



int main() {
    srand(time(nullptr));

    char player;
    char computer;

    player = getUserChoice();
    cout << "You chose: ";
    showChoice(player);

    cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player, computer);
}

char getComputerChoice(){

    // srand(time(nullptr));
    int num = rand() % 3 + 1;

    switch (num) {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default:return '0';
    }

    return 0;
}
