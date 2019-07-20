#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>

void Init(char chess_board[ROW][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            chess_board[i][j] = ' ';
        }
    }
}

void Print(char chess_board[ROW][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(j != COL - 1){
                printf(" %c |", chess_board[i][j]);
            }else{
                printf(" %c ", chess_board[i][j]);
            }
        }
        printf("\n");
        if(i != ROW - 1){
        printf("---|---|---\n");
        }
    }
}

void Player_Move(char chess_board[ROW][COL]){
    printf("请输入您要落子的坐标:");
    while (1) {
        int row = 0;
        int col = 0;
        scanf("%d %d", &row, &col);
        //看落子位置是否合法
        if((row < 1 && row > ROW) || (col < 1 || col > COL)){
        printf("您的输入有误!");
            continue;
        }
        if(chess_board[row][col] != ' '){
            printf("您的输入有误!");
            continue;
        }
        //落子
        chess_board[row - 1][col - 1] = 'X';
        break;
    }
}

void Computer_Move(char chess_board[ROW][COL]){
    while (1) {
        int i = rand() % ROW;
        int j = rand() % COL;
        if((chess_board[i][j]) != ' '){
            continue;
        }
        chess_board[i][j] = 'O';
        break;
    }
}


int Is_Fall(char chess_board[ROW][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(chess_board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char Is_Win(char chess_board[ROW][COL]){
    int i = 0;
    //判定行
    for(i = 0; i < ROW; i++){
        if(chess_board[i][0] == chess_board[i][1] && chess_board[i][0]== chess_board[i][2] && chess_board[i][0] != ' '){
            return chess_board[i][0];
        }
    }
    //判定列
    for(i = 0; i < COL; i++){
        if(chess_board[0][i] == chess_board[1][i] && chess_board[0][i]== chess_board[2][i] && chess_board[0][i] != ' '){
            return chess_board[0][i];
        }
    }
    //判断对角线
    if(chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2] && chess_board[0][0] != ' '){
            return chess_board[0][0];
    }
    if(chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0] && chess_board[0][2] != ' '){
            return chess_board[0][2];
    }
   //判断和棋
    if(Is_Fall(chess_board) == 1){
            return '=';
    }
    //胜负未分
    return ' ';
}


int Game(){
    char chess_board[ROW][COL];
    //初始化棋盘
    Init(chess_board);
    char result = ' ';
    while(1){
        //打印棋盘
    
        Print(chess_board);
        //玩家落子
        Player_Move(chess_board);
        //判断输赢
        result = Is_Win(chess_board);
        if(result != ' '){
            break;
        }
        //电脑落子
        Computer_Move(chess_board);
        //判断输赢
        result = Is_Win(chess_board);
        if(result != ' '){
            break;
        }
    }
    Print(chess_board);
    if(result == 'X'){
        printf("您赢了!\n");
    }
    if(result == 'O'){
        printf("您输了!\n");
    }
    if(result == '='){
        printf("和棋\n");
    }
    return 0;
}


void Menu(){
    printf("*******************\n");
    printf("****  1. paly  ****\n");
    printf("****  0. exit  ****\n");
    printf("*******************\n");
}

int main() {
    
    int input = 0;
    do{
        //打印界面
        Menu();
        //根据选择来确定下一步
        printf("请输入您的选择:");
        scanf("%d", &input);
        switch (input) {
        case 1:
            Game();
            break;
        case 0:
            printf("游戏退出!\n");
            break;
        default:
            printf("您输入有误\n");
        }
    }while(input);
    
    return 0;
}
