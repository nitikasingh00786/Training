#include<iostream>
#include<Bits/stdc++-2.h>
#include<vector>
using namespace std;
int numRookAttacks(vector<vector<char>>& board) {
    int n = 8; // Size of the board (8x8)
    int rookRow = -1, rookCol = -1;

    // Locate the rook
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'R') {
                rookRow = i;
                rookCol = j;
                break;
            }
        }
        if (rookRow != -1) break;
    }

    int attacks = 0;

    // Check upward direction
    for (int i = rookRow - 1; i >= 0; --i) {
        if (board[i][rookCol] == 'B') break; // Blocked by a bishop
        if (board[i][rookCol] == 'p') {
            ++attacks;
            break; // Pawn found, stop checking further in this direction
        }
    }

    // Check downward direction
    for (int i = rookRow + 1; i < n; ++i) {
        if (board[i][rookCol] == 'B') break; // Blocked by a bishop
        if (board[i][rookCol] == 'p') {
            ++attacks;
            break; // Pawn found, stop checking further in this direction
        }
    }

    // Check leftward direction
    for (int j = rookCol - 1; j >= 0; --j) {
        if (board[rookRow][j] == 'B') break; // Blocked by a bishop
        if (board[rookRow][j] == 'p') {
            ++attacks;
            break; // Pawn found, stop checking further in this direction
        }
    }

    // Check rightward direction
    for (int j = rookCol + 1; j < n; ++j) {
        if (board[rookRow][j] == 'B') break; // Blocked by a bishop
        if (board[rookRow][j] == 'p') {
            ++attacks;
            break; // Pawn found, stop checking further in this direction
        }
    }

    return attacks;
}

int main() {
    vector<vector<char>> board = {
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', 'R', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'}
    };

    cout << "Number of pawns attacked by the rook: " << numRookAttacks(board) << endl;

    return 0;
}
