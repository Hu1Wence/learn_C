#define Max_ROW 10
#define Max_COL 10
#define Mine_count 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mune() {
    printf("*******************\n");
    printf("****  1. paly  ****\n");
    printf("****  0. exit  ****\n");
    printf("*******************\n");
}

void Init(char show_map[Max_ROW + 2][Max_COL + 2], char mine_map[Max_ROW + 2][Max_COL + 2]){
    int row = 0;
    int col = 0;
    srand((unsigned int)time(0));
    for(row = 0; row < Max_ROW + 2; row++){
        for(col = 0; col < Max_COL + 2; col++){
            show_map[row][col] = '*';
        }
    }
    for(row = 0; row < Max_ROW + 2; row++){
        for(col = 0; col < Max_COL + 2; col++){
            mine_map[row][col] = '0';
        }
    }
    int count = Mine_count;
    while (count > 0) {
        row = rand() % Max_ROW;
        col = rand() % Max_COL;
        if(mine_map[row + 1][col + 1] == '1'){
            continue;
        }
        mine_map[row + 1][col + 1] = '1';
        count--;
    }
}

void Print1(char show_map[Max_ROW +2][Max_COL + 2]) {
        //1，先打印最上面一排
        printf("   | ");
        for(int col = 1; col <= Max_COL; col++){
            printf("%d ", col);
        }
        //2.打印一排分割线
        printf("\n");
        printf("------------------------\n");
        for(int row = 1; row <= Max_ROW; row++){
            printf(" %-2d| ", row);
            for(int col = 1; col <= Max_COL; col++){
                printf("%c ", show_map[row][col]);
            }
            printf("\n");
        }
    }

void Print2(char mine_map[Max_ROW + 2][Max_COL + 2]) {
    //1，先打印最上面一排
    printf("   | ");
    for(int col = 0; col < Max_COL + 2; col++){
        printf("%d ", col);
    }
    //2.打印一排分割线
    printf("\n");
    printf("-----------------------------\n");
    for(int row = 0; row < Max_ROW + 2; row++){
        printf(" %-2d| ", row);
        for(int col = 0; col < Max_COL + 2; col++){
            printf("%c ", mine_map[row][col]);
        }
        printf("\n");
    }
}

int get_mine(char mine_map[Max_ROW + 2][Max_COL + 2], int x, int y){
    int count = 0;
    if(mine_map[x - 1][y] == '1'){
        count++;
    }
    if(mine_map[x - 1][y - 1] == '1'){
        count++;
    }
    if(mine_map[x][y - 1] == '1'){
        count++;
    }
    if(mine_map[x + 1][y - 1] == '1'){
        count++;
    }
    if(mine_map[x + 1][y] == '1'){
        count++;
    }
    if(mine_map[x + 1][y + 1] == '1'){
        count++;
    }
    if(mine_map[x][y + 1] == '1'){
        count++;
    }
    if(mine_map[x - 1][y + 1] == '1'){
        count++;
    }
    return count;
}

void open_board(char mine[Max_ROW + 2][Max_COL + 2],char show[Max_ROW + 2][Max_COL + 2],int i,int j)
{
    if(mine[i][j]=='0'&&i>=0&&j>=0&&show[i][j]=='*')
    {
        show[i][j]=get_mine(mine,i,j)+'0';
    }
    if(mine[i][j-1]=='0'&&i>=0&&j-1>=0&&show[i][j-1]=='*')
    {
        show[i][j-1]=get_mine(mine,i,j-1)+'0';
        if(get_mine(mine,i,j-1)==0)
        {
            open_board(mine,show,i,j-1);
        }
    }
    if(mine[i][j+1]=='0'&&i>=0&&j+1>=0&&show[i][j+1]=='*')
    {
        show[i][j+1]=get_mine(mine,i,j+1)+'0';
        if(get_mine(mine,i,j+1)==0)
        {
            open_board(mine,show,i,j+1);
        }
    }
    if(mine[i-1][j]=='0'&&i-1>=0&&j>=0&&show[i-1][j]=='*')
    {
        show[i-1][j]=get_mine(mine,i-1,j)+'0';
        if(get_mine(mine,i-1,j)==0)
        {
            open_board(mine,show,i-1,j);
        }
    }
    if(mine[i-1][j-1]=='0'&&i-1>=0&&j-1>=0&&show[i-1][j-1]=='*')
    {
        show[i-1][j-1]=get_mine(mine,i-1,j-1)+'0';
        if(get_mine(mine,i-1,j-1)==0)
        {
            open_board(mine,show,i-1,j-1);
        }
    }
    if(mine[i-1][j+1]=='0'&&i-1>=0&&j+1>=0&&show[i-1][j+1]=='*')
    {
        show[i-1][j+1]=get_mine(mine,i-1,j+1)+'0';
        if(get_mine(mine,i-1,j+1)==0)
        {
            open_board(mine,show,i-1,j+1);
        }
    }
    if(mine[i+1][j+1]=='0'&&i+1>=0&&j+1>=0&&show[i+1][j+1]=='*')
    {
        show[i+1][j+1]=get_mine(mine,i+1,j+1)+'0';
        if(get_mine(mine,i+1,j+1)==0)
        {
            open_board(mine,show,i+1,j+1);
        }
    }
    if(mine[i+1][j]=='0'&&i+1>=0&&j>=0&&show[i+1][j]=='*')
    {
        show[i+1][j]=get_mine(mine,i+1,j)+'0';
        if(get_mine(mine,i+1,j)==0)
        {
            open_board(mine,show,i+1,j);
        }
    }
    if(mine[i+1][j-1]=='0'&&i+1>=0&&j-1>=0&&show[i+1][j-1]=='*')
    {
        show[i+1][j-1]=get_mine(mine,i+1,j-1)+'0';
        if(get_mine(mine,i+1,j-1)==0)
        {
            open_board(mine,show,i+1,j-1);
        }
    }
    
}

void Player_Move(char show_map[Max_ROW + 2][Max_COL + 2], char mine_map[Max_ROW + 2][Max_COL + 2]){
    Print1(show_map);
    Print2(mine_map);
    int safe_count = 0;
    do {
        printf("请输入要排查的位置坐标:\n");
        int x = 0;
        int y = 0;
        scanf("%d %d", &x, &y);
        if(x < 1 || x >  Max_ROW || y < 1 || y > Max_COL){
            printf("您输入有误!\n");
            continue;
        }else if(mine_map[x][y] == '1'){
            Print2(mine_map);
            printf("您被炸死了，扫雷失败!\n");
            break;
        }else{
            open_board(mine_map, show_map, x, y);
            Print1(show_map);
        }
        for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                if(show_map[i][j] == '*'){
                    safe_count++;
                }
            }
        }
        if(safe_count == 10){
            printf("游戏胜利!\n");
            break;
        }
        safe_count = 0;
    } while (1);

    
}


void game() {
    char show_map[Max_ROW + 2][Max_COL + 2];
    char mine_map[Max_ROW + 2][Max_COL + 2];
    //初始化两个棋盘
    Init(show_map, mine_map);
    //玩家落子
    Player_Move(show_map, mine_map);
}


int main() {
    int input = 0;
    do {
        mune();//打印菜单;
        printf("请输入你的选择:");
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("游戏退出!\n");
                break;
            default:
                printf("输入有误!\n");
                break;
        }
    } while (input);
    return 0;
}
