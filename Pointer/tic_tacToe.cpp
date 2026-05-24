//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <vector>
using namespace std;

// Display the board with elegance
void displayBoard(const vector<vector<char>>& board) {
    cout << "\n  1   2   3\n";
    for(int i = 0; i < 3; i++) {
        cout << i + 1;
        for(int j = 0; j < 3; j++) {
            cout << " " << board[i][j];
            if(j < 2) cout << " |";
        }
        cout << "\n";
        if(i < 2) cout << " -----------\n";
    }
    cout << "\n";
}

// Check victory conditions
bool checkWin(const vector<vector<char>>& board, char player) {
    // Rows and columns
    for(int i = 0; i < 3; i++) {
        if((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
           (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
    }
    // Diagonals
    if((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
       (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    int moves = 0;

    cout << "=== TIC TAC TOE: A Game of Strategy ===\n";

    while(moves < 9) {
        displayBoard(board);
        int row, col;

        cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
        cin >> row >> col;
        row--; col--; // Convert to 0-indexed

        if(row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        board[row][col] = currentPlayer;
        moves++;

        if(checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "🎉 Player " << currentPlayer << " wins!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    if(moves == 9) cout << "It's a draw!\n";

    return 0;
}