#include <iostream>
#include <vector>
void printBoard(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) {
                std::cout << " | ";
            }
        }
        std::cout << std::endl;
        if (i < 2) {
            std::cout << "---------" << std::endl;
        }
    }
}

bool isGameOver(const std::vector<std::vector<char>>& board, char player) {

    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; 
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; 
    }
    return false;
}

bool isTie(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false; 
            }
        }
    }
    return true; 
}

int main() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    bool player1Turn = true; 
    bool gameOver = false;

    while (!gameOver) {
        
        printBoard(board);

        
        char currentPlayer = (player1Turn) ? 'X' : 'O';

        
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
        std::cin >> row >> col;

       
        --row;
        --col;

       
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            player1Turn = !player1Turn; // Switch turns
            gameOver = isGameOver(board, currentPlayer) || isTie(board);
        } else {
            std::cout << "Invalid move! Try again." << std::endl;
        }
    }

   
    printBoard(board);

    
    if (isTie(board)) {
        std::cout << "It's a tie!" << std::endl;
    } else {
        char winner = (player1Turn) ? 'O' : 'X';
        std::cout << "Player " << winner << " wins!" << std::endl;
    }

    return 0;
}
