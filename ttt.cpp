#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to display the game board
void displayBoard(const vector<vector<char>>& board) {
    cout << "  1 2 3" << endl;
    cout << " -------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << "|";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if there is a winner
char checkWinner(const vector<vector<char>>& board) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0]; // Winner in row i
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i]; // Winner in column i
        }
    }
    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0]; // Winner in top-left to bottom-right diagonal
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2]; // Winner in top-right to bottom-left diagonal
    }
    // Check for draw
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return ' '; // Game not over yet
            }
        }
    }
    return 'D'; // Draw
}

// Function to get CPU's move
pair<int, int> getCPUMove(const vector<vector<char>>& board) {
    srand(time(nullptr));
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] != ' ');
    return {row, col};
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize 3x3 game board
    char currentPlayer = 'X'; // Player X starts the game
    char opponent;
    bool singlePlayer = false;

    // Choose game mode
    cout << "Choose game mode:" << endl;
    cout << "1. Local multiplayer" << endl;
    cout << "2. Single player" << endl;
    int mode;
    cin >> mode;
    if (mode == 2) {
        singlePlayer = true;
        cout << "Choose your symbol (X or O): ";
        cin >> opponent;
        opponent = toupper(opponent);
        if (opponent != 'X' && opponent != 'O') {
            cout << "Invalid symbol. Defaulting to O." << endl;
            opponent = 'O';
        }
    }

    while (true) {
        displayBoard(board);

        // Get player's move
        int row, col;
        if (singlePlayer && currentPlayer == opponent) {
            pair<int, int> cpuMove = getCPUMove(board);
            row = cpuMove.first;
            col = cpuMove.second;
            cout << "CPU's move: " << row + 1 << " " << col + 1 << endl;
        } else {
            cout << "Player " << currentPlayer << "'s turn. Enter row and column (1-3): ";
            cin >> row >> col;
            --row; --col;
        }

        // Validate input
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        // Update game board
        board[row][col] = currentPlayer;

        // Check for winner
        char winner = checkWinner(board);
        if (winner != ' ') {
            displayBoard(board);
            if (winner == 'D') {
                cout << "It's a draw!" << endl;
            } else {
                cout << "Player " << winner << " wins!" << endl;
            }
            break; // End game
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
