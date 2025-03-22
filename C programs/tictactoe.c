#include <stdio.h>

// Function prototypes
void printBoard(char board[3][3]);
int checkWin(char board[3][3]);
int isBoardFull(char board[3][3]);

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col;
    int currentPlayer = 1; // Player 1 starts (1 or 2)
    int gameStatus = 0; // 0 = ongoing, 1 = win, 2 = draw

    printf("Tic Tac Toe Game\n");
    printBoard(board);

    while (gameStatus == 0) {
        if (currentPlayer == 1) {
            printf("Player 1 (X), enter row and column (0-2): ");
        } else {
            printf("Player 2 (O), enter row and column (0-2): ");
        }
        
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        if (currentPlayer == 1) {
            board[row][col] = 'X';
            currentPlayer = 2;
        } else {
            board[row][col] = 'O';
            currentPlayer = 1;
        }

        printBoard(board);

        gameStatus = checkWin(board);
        if (gameStatus == 0 && isBoardFull(board)) {
            gameStatus = 2; // Draw
        }
    }

    if (gameStatus == 1) {
        if (currentPlayer == 1) {
            printf("Player 2 (O) wins!\n");
        } else {
            printf("Player 1 (X) wins!\n");
        }
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

void printBoard(char board[3][3]) {
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkWin(char board[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return 1;
        }
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }

    return 0;
}

int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Empty space found
            }
        }
    }
    return 1; // No empty spaces
}
