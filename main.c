#include <stdio.h>
#include <stdlib.h>
int gameConsole();
void printGame(int x);
void printGame2(int userInput);
int checkForDoubleInput(int userInput);
int checkWinner();
char gameIn[3][3] = {' ',' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' ,' ' };
int gameArray[3][3] = {1,2,3,4,5,6,7,8,9};
int response;
int main()
{
    int input;
    printf("########################\n");
    printf("########################\n");
    printf("########################\n");
    printf("Player 1 (X)\t\t Player 2 (O)");
    system("cls");
    printf("Player 1 (X)\t\t Player 2 (O)\n");
    printf("\t\t\t\n");
    start1: gameConsole();
    printf("\n \tPlayer ones turn!\n");
    scanf("\t\t %d", &input);
    system("cls");
    if(checkForDoubleInput(input) == 1){
    system("cls");
        printf("\a\a\a\a\n\t Already Taken!!!\n\n\n");
        goto start1;

    }
    else if(checkForDoubleInput(input) == 2){
        system("cls");
        printf("\tInvalid Input!!!\a\n\tTry Again\n");
        goto start1;
    }
    else{
        printGame(input);
        printf("\n");
        printf("\n");
        printf("\n");
        if(checkWinner() == 1){
  again2:printf("\n\n\tPress [1] to play again.\n\tPress [2] to exit.\n");
        scanf("\t\t%d", &response);
        if(response == 1){
              for(int i = 0; i < 3; ++i){
                    for(int j = 0; j < 3; ++j){
                        gameIn[i][j] = ' ';
            }
            }
            goto start1;
        }
        else if(response == 2){
            return 0;
        }
        else{
            goto again2;
        }
        }
    }
    ///////////////////////////////////////////////////////////////////
    start2: gameConsole();
    printf("\n\tPlayer twos turn!\n");
    scanf("\t%d", &input);
    system("cls");
    if(checkForDoubleInput(input) == 1){
            system("cls");
        printf("\a\a\a\a\n\t Already Taken!!!\n\n");
        goto start2;

    }
    else if(checkForDoubleInput(input) == 2){
        system("cls");
        printf("\tInvalid Input!!!\a\n\tTry Again\n");
        goto start2;
    }
    else{
        printGame2(input);
        printf("\n");
        printf("\n");
        printf("\n");
        if(checkWinner() == 1){
        again1:printf("\n\n\tPress [1] to play again.\n\tPress [2] to exit.\n");
        scanf("\t%d", &response);
        if(response == 1){
            for(int i = 0; i < 3; ++i){
                    for(int j = 0; j < 3; ++j){
                        gameIn[i][j] = ' ';
            }
            }
            goto start1;
        }
        else if(response == 2){
            return 0;
        }
        else{
            goto again1;
        }
        }
    }

    checkWinner();
    if(checkWinner() == 1){
        again:printf("\n\n\tPress [1] to play again.\n \tPress [2] to exit.\n");
        scanf("%d", &response);
        if(response == 1){
            goto start1;
        }
        else{
            goto again;
        }
    }
    else{
        goto start1;
    }

}
int gameConsole(){
        printf("\t\ _________________\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %d  |  %d  |  %d  |\n",gameArray[0][0],gameArray[0][1],gameArray[0][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %d  |  %d  |  %d  |\n",gameArray[1][0],gameArray[1][1],gameArray[1][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %d  |  %d  |  %d  |\n",gameArray[2][0],gameArray[2][1],gameArray[2][2]);
        printf("\t|_____|_____|_____|\n");
};

void printGame(int userInput){
    printf("\n");
        if(userInput > 0 && userInput < 4){
        gameIn[0][userInput - 1] = 'X';
        }
        else if(userInput > 3 && userInput < 7){
        gameIn[1][userInput - 4] = 'X';
        }
        else if(userInput > 6 && userInput < 10){
        gameIn[2][userInput - 7] = 'X';
        }
        else{
            printf("\a");
        }

        printf("\t\ _________________\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[0][0],gameIn[0][1],gameIn[0][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[1][0],gameIn[1][1],gameIn[1][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[2][0],gameIn[2][1],gameIn[2][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\n\n");
};

void printGame2(int userInput){
    printf("\n");
        if(userInput > 0 && userInput < 4){
        gameIn[0][userInput - 1] = 'O';
        }
        else if(userInput > 3 && userInput < 7){
        gameIn[1][userInput - 4] = 'O';
        }
        else if(userInput > 6 && userInput < 10){
        gameIn[2][userInput - 7] = 'O';
        }
        else{
            printf("\a");
        }

        printf("\t\ _________________\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[0][0],gameIn[0][1],gameIn[0][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[1][0],gameIn[1][1],gameIn[1][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\t|     |     |     |\n");
        printf("\t|  %c  |  %c  |  %c  |\n",gameIn[2][0],gameIn[2][1],gameIn[2][2]);
        printf("\t|_____|_____|_____|\n");
        printf("\n\n");
};

int checkWinner(){
    if(gameIn[0][0] == gameIn[0][1] && gameIn[0][2] == gameIn[0][1] && gameIn[0][0] != ' '){
        printf("\tPlayer %c won",gameIn[0][0]);
        return 1;
    }
    else if(gameIn[1][0] == gameIn[1][1] && gameIn[1][2] == gameIn[1][1] && gameIn[1][0] != ' '){
        printf("\tPlayer %c won",gameIn[1][0]);
        return 1;
    }
    else if(gameIn[2][0] == gameIn[2][1] && gameIn[2][2] == gameIn[2][1] && gameIn[2][0] != ' '){
        printf("\tPlayer %c won",gameIn[2][0]);
        return 1;
    }
    else if(gameIn[0][0] == gameIn[1][0] && gameIn[2][0] == gameIn[0][0] && gameIn[0][0] != ' '){
        printf("\tPlayer %c won",gameIn[0][0]);
        return 1;
    }
    else if(gameIn[0][1] == gameIn[1][1] && gameIn[2][1] == gameIn[0][1] && gameIn[0][1] != ' '){
        printf("\tPlayer %c won",gameIn[0][1]);
        return 1;
    }
    else if(gameIn[0][2] == gameIn[1][2] && gameIn[2][2] == gameIn[0][2] && gameIn[0][2] != ' '){
        printf("\tPlayer %c won",gameIn[0][2]);
        return 1;
    }
    else if(gameIn[0][0] == gameIn[1][1] && gameIn[2][2] == gameIn[0][0] && gameIn[0][0] != ' '){
        printf("\tPlayer %c won",gameIn[0][0]);
        return 1;
    }
    else if(gameIn[0][2] == gameIn[1][1] && gameIn[2][0] == gameIn[0][2] && gameIn[0][2] != ' '){
        printf("\tPlayer %c won",gameIn[0][2]);
        return 1;
    }
    else if(gameIn[0][0] != gameIn[0][2] && gameIn[0][1] != gameIn[0][0] && gameIn[0][1] != ' '  && gameIn[0][0] != ' ' && gameIn[0][2] != ' '&& gameIn[1][1] != ' '&& gameIn[1][0] != ' '&& gameIn[1][2] != ' '&& gameIn[2][1] != ' '&& gameIn[2][0] != ' '&& gameIn[2][2] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[1][0] != gameIn[1][2] && gameIn[1][1] != gameIn[1][0] && gameIn[1][1] != ' '  && gameIn[1][0] != ' ' && gameIn[1][2] != ' '&& gameIn[0][0] != ' '&& gameIn[0][1] != ' '&& gameIn[0][2] != ' '&& gameIn[2][1] != ' '&& gameIn[2][0] != ' '&& gameIn[2][2] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[2][0] != gameIn[2][2] && gameIn[2][1] != gameIn[2][0] && gameIn[2][1] != ' '  && gameIn[2][0] != ' ' && gameIn[2][2] != ' '&& gameIn[0][0] != ' '&& gameIn[0][1] != ' '&& gameIn[0][2] != ' '&& gameIn[1][0] != ' '&& gameIn[1][1] != ' '&& gameIn[1][2] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[0][0] != gameIn[2][0] && gameIn[1][0] != gameIn[0][0] && gameIn[1][0] != ' '  && gameIn[0][0] != ' ' && gameIn[2][0] != ' '&& gameIn[0][1] != ' '&& gameIn[0][2] != ' '&& gameIn[1][1] != ' '&& gameIn[1][2] != ' '&& gameIn[2][1] != ' '&& gameIn[2][2] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[0][1] != gameIn[2][1] && gameIn[1][1] != gameIn[0][1] && gameIn[1][1] != ' '  && gameIn[0][1] != ' ' && gameIn[2][1] != ' '&& gameIn[0][0] != ' '&& gameIn[0][2] != ' '&& gameIn[1][0] != ' '&& gameIn[1][2] != ' '&& gameIn[2][0] != ' '&& gameIn[2][2] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[0][2] != gameIn[2][2] && gameIn[1][2] != gameIn[0][2] && gameIn[1][2] != ' '  && gameIn[2][0] != ' ' && gameIn[2][2] != ' '&& gameIn[0][1] != ' '&& gameIn[0][0] != ' '&& gameIn[0][2] != ' '&& gameIn[1][0] != ' '&& gameIn[1][1] != ' '&& gameIn[2][1] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[0][0] != gameIn[2][2] && gameIn[1][1] != gameIn[0][0] && gameIn[1][1] != ' '  && gameIn[0][0] != ' ' && gameIn[2][2] != ' '&& gameIn[0][1] != ' '&& gameIn[0][2] != ' '&& gameIn[1][0] != ' '&& gameIn[1][2] != ' '&& gameIn[2][0] != ' '&& gameIn[2][1] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }
    else if(gameIn[0][2] != gameIn[2][0] && gameIn[1][1] != gameIn[0][2] && gameIn[1][1] != ' ' && gameIn[0][2] != ' ' && gameIn[2][0] != ' ' && gameIn[0][0] != ' ' && gameIn[0][1] != ' ' && gameIn[2][1] != ' '&& gameIn[1][2] != ' '&& gameIn[2][2] != ' '&& gameIn[1][0] != ' '){
        printf("\n\tTie game \n");
        return 1;
    }

}

int checkForDoubleInput(int userInput){
    if(userInput > 0 && userInput < 4){
        if(gameIn[0][userInput - 1] != ' '){
            return 1;
        }
        }
        else if(userInput > 3 && userInput < 7){
                if(gameIn[1][userInput - 4] != ' '){
                    return 1;
                }
        }
        else if(userInput > 6 && userInput < 10){
         if(gameIn[2][userInput - 7] != ' '){
            return 1;
         }
        }
        else{
            return 2;
        }
}

//gameIn[0][0] != ' ' && gameIn[0][1] != ' ' && gameIn[2][1] != ' ' && gameIn[0][0] != ' ' && gameIn[0][0] != ' ' &&gameIn[0][0] != ' '
