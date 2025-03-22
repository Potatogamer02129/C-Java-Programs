#include <stdio.h>
#include <ctype.h>

void printBoard(char Arr[3][3]);
void player2input(char Arr[3][3]);
void player1input(char Arr[3][3]);
int CheckWinner(char Arr[3][3]);
int isFull(char Arr[3][3]);

void main(){
    char replay='Y';
    while(replay=='Y'){
int winner=0;
    char Arr[3][3]={{' ',' ',' '},
                    {' ',' ',' '},   
                    {' ',' ',' '}
    };
    while(winner==0 && !isFull(Arr)){
        printBoard(Arr);
        player1input(Arr);
        printBoard(Arr);
        winner=CheckWinner(Arr);
        if(winner || isFull(Arr))
        break;
        player2input(Arr);
        winner=CheckWinner(Arr);
    }
    if(winner)
    printf("Player1 WINS!\n");
    else if(winner==2)
    printf("Player2 WINS!\n");
    else
    printf("Its A TIE!\n");
    printf("Do you want to Play Agiain(Y/N): ");
    scanf(" %c",&replay);
    replay=toupper(replay);
    }
    
}

void printBoard(char Arr[3][3]){
    printf("****************\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%c",Arr[i][j]);
            if(j<2)
            printf("|");
        }
        printf("\n");
        if(i<2)
        printf("-|-|-\n");
    }
    printf("****************\n");
}

void player1input(char Arr[3][3]){
    int i,j;
    while(1){
        printf("Player 1(X) Enter the Row: ");
    scanf("%d",&i);
    printf("Player 1(X) Enter the Column: ");
    scanf("%d",&j);
    if(Arr[i][j]==' '){
        Arr[i][j]='X';
        break;
    }else
    printf("Invalid move\n");
    }
}

void player2input(char Arr[3][3]){
    int i,j;
    while(1){
    printf("Player 2(O) Enter the Row: ");
    scanf("%d",&i);
    printf("Player 2(O) Enter the Column: ");
    scanf("%d",&j);
    if(Arr[i][j]==' '){
        Arr[i][j]='O';
        break;
    }
    else
    printf("Invalid move\n");
    }
}

int CheckWinner(char Arr[3][3]) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (Arr[i][0] == Arr[i][1] && Arr[i][1] == Arr[i][2] && Arr[i][0] != ' ')
            return (Arr[i][0] == 'X') ? 1 : 2;
        if (Arr[0][i] == Arr[1][i] && Arr[1][i] == Arr[2][i] && Arr[0][i] != ' ')
            return (Arr[0][i] == 'X') ? 1 : 2;
    }

    // Check diagonals
    if (Arr[0][0] == Arr[1][1] && Arr[1][1] == Arr[2][2] && Arr[0][0] != ' ')
        return (Arr[0][0] == 'X') ? 1 : 2;
    if (Arr[0][2] == Arr[1][1] && Arr[1][1] == Arr[2][0] && Arr[0][2] != ' ')
        return (Arr[0][2] == 'X') ? 1 : 2;

    return 0; // No winner yet
}


int isFull(char Arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (Arr[i][j] == ' ')
                return 0; // Board is not full
        }
    }
    return 1; // Board is full
}