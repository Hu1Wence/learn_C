#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ROW 3
#define MAX_COL 3

void Init(char chess_board[MAX_ROW][MAX_COL]){
    for(int row = 0; row < MAX_ROW; row++){
        for (int col = 0; col < MAX_COL; col++) {
            chess_board[row][col] = ' ';
        }
    }
    srand((unsigned int)time(0));
}

void Print(char chess_board[MAX_ROW][MAX_COL]){
    printf("   0   1   2\n");
     printf("  ---+---+---\n");
     for(int row = 0, i = 0; row < MAX_ROW, i < MAX_ROW; row++, i++){
         printf("%d| %c | %c | %c |\n", i, chess_board[row][0], chess_board[row][1], chess_board[row][2]);
        printf("  ---+---+---\n");
     }
}

void PlayerMove(char chess_board[MAX_ROW][MAX_COL]){
    while(1){
        printf("请输入要落子位置的坐标(row col):");
        int row = 0;
        int col = 0;
        scanf("%d %d", &row, &col);
        //进行合法性判定
        if(row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
           printf("您输入的坐标有误，请重新输入!\n");
            continue;
        }
        //判定这个当前位置是否已经落子
        if(chess_board[row][col] != ' '){
            printf("该位置已经有子了，请重新输入!\n");
            continue;
        }
        //进行落子
        chess_board[row][col] = 'x';
        break;
    }
}

void ComputerMove(char chess_board[MAX_ROW][MAX_COL]){
    while(1){
        int row = rand() % MAX_ROW;
        int col = rand() % MAX_COL;
        if(chess_board[row][col] != ' '){
            continue;
        }
        chess_board[row][col] = 'o';
        break;
    }
}

int IsFull(char chess_board[MAX_ROW][MAX_COL]){
    //判断棋盘是否满了
    //依次检查棋盘的每个位置，看看有没有存在' '
    for(int row = 0; row < MAX_ROW; row++){
        for(int col = 0; col < MAX_ROW; col++){
            if(chess_board[row][col] == ' '){
                //找到了一个空格，说明没满
                return 0;
            }
        }
    }
    return 1;
}


//1.玩家胜利  x
//2.电脑胜利  o
//和棋       =
//未分胜负   ' '
char IsWin(char chess_board[MAX_ROW][MAX_COL]){
    
    //1.判定行
    for(int row = 0; row < MAX_ROW; row++){
        if(chess_board[row][0] == chess_board[row][1] && chess_board[row][0] == chess_board[row][2] && chess_board[row][0] != ' '){
            return chess_board[row][0];
        }
    }
    //2.判定列
    for(int col = 0; col < MAX_COL; col++){
        if(chess_board[0][col] == chess_board[1][col] && chess_board[0][col] == chess_board[2][col] && chess_board[0][col] != ' '){
            return chess_board[0][col];
        }
    }
    //3.判定对角线
    if(chess_board[0][0] == chess_board[1][1] && chess_board[0][0] == chess_board[2][2] && chess_board[0][0] != ' '){
        return chess_board[0][0];
    }
    if(chess_board[0][2] == chess_board[1][1] && chess_board[0][2] == chess_board[2][0] && chess_board[0][2] != ' '){
        return chess_board[0][2];
    }
    //4.是否和棋,棋盘是否满了
    if(IsFull(chess_board)){
        return '=';
    }
    //胜负未分情况
    return ' ';
}

int main(){
    
    char chess_board[MAX_ROW][MAX_COL];
    //1.初始化棋盘
    Init(chess_board);
    
    char result = ' ';
    while (1) {
        //2.打印棋盘    。
        Print(chess_board);
        //3.玩家落子
        PlayerMove(chess_board);
        //4.判定游戏是否结束
        result = IsWin(chess_board);
        if(result != ' '){
            break;
         }
        //5.电脑落子
        ComputerMove(chess_board);
        //6.判定游戏是否结束
        result = IsWin(chess_board);
        if(result != ' '){
            break;
        }
    }
    Print(chess_board);
    if(result == 'x'){
        printf("您赢了!\n");
    }else if(result == 'o'){
        printf("你真菜!\n");
    }else {
        printf("你还是真菜!\n");
    }
    return 0;
}
