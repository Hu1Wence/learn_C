#include <stdio.h>
#include <stdlib.h>
//创建两个二维数组b来表示地图
//a)show_map 表示给玩家展示的b内容（数字表示翻开，*表示未翻开）
//b)mine——map 表示l地雷的布局（0b表示不是地雷，1表示是地雷）

#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10

void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]){
    //1.对于 show_map初始化为全*
    for(int row = 0; row < MAX_ROW; row++){
        for(int col = 0; col < MAX_COL; col++){
            show_map[row][col] = '*';
        }
    }
    //对于mine_map来说，先初始化为全0，在随机生成10个1
    for(int row = 0; row < MAX_ROW; row++){
        for(int col = 0; col < MAX_COL; col++){
            mine_map[row][col] = '0';
        }
    }
    int count = MINE_COUNT;
    while(count > 0){
        int row = rand() % MAX_ROW;
        int col = rand() % MAX_COL;
        if(mine_map[row][col] == '1'){
            //这个位置已经是雷了，重新生成一个雷
            continue;
        }
        mine_map[row][col] = '1';
        count--;
    }
}

void PrintMap(char map[MAX_ROW][MAX_COL]){
    //1，先打印最上面一排
    printf("  | ");
    for(int col = 0; col < MAX_COL; col++){
        printf("%d ", col);
    }
    //2.打印一排分割线
    printf("\n");
    printf("----------------------\n");
    for(int row = 0; row < MAX_ROW; row++){
        printf(" %d| ", row);
        for(int col = 0; col < MAX_COL; col++){
            printf("%c ", map[row][col]);
        }
        printf("\n");
    }
}

void GetPos(char show_map[MAX_ROW][MAX_COL], int* row, int* col){
    while (1) {
        printf("请输入一组坐标:");
        scanf("%d %d", row, col);
        //合法性判定
        if(*row < 0 || *row >= MAX_ROW || *col < 0 || *col >= MAX_COL){
            printf("您的输入有误，请重新输入！\n");
            continue;
        }
        if(show_map[*row][*col] != '*'){
            //当前位置已经被翻开了，就需要重新输入
            printf("您的输入位置已经翻开，请重新输入\n");
            continue;
        }
        break;
    }
}

//判定当前位置周围有几个雷，并更新对应的地图位置
void Update_Map(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL], int row, int col){
    //1.周围八个位置有几个雷
    int mine_count = 0;
    if(row - 1 >= 0 && col - 1 >= 0 && mine_map[row - 1][col - 1] == '1'){
        mine_count++;
    }
    if(row - 1 >= 0 && mine_map[row - 1][col] == '1'){
        mine_count++;
    }
    if(row - 1 >= 0 && col + 1 < MAX_COL && mine_map[row - 1][col + 1] == '1'){
        mine_count++;
    }
    if(col - 1 >= 0 && mine_map[row][col - 1] == '1'){
        mine_count++;
    }
    if(col + 1 < MAX_COL && mine_map[row][col + 1] == '1'){
        mine_count++;
    }
    if(row + 1 < MAX_ROW && col - 1 >= 0 && mine_map[row + 1][col - 1] == '1'){
        mine_count++;
    }
    if(row + 1 < MAX_ROW && mine_map[row + 1][col] == '1'){
        mine_count++;
    }
    if(row + 1 < MAX_ROW && col + 1 < MAX_COL && mine_map[row + 1][col + 1] == '1'){
        mine_count++;
    }
    
    //2.把这个数字更新到show_map中
    show_map[row][col] = mine_count + '0';
    
}

void Game(){
    //核心流程
    //1.创建地图并初始化
    //a）对于 show_map来说，初始化全为*
    //b）对于mine_map来说，要随机生成若干个地雷（10个）
    char show_map[MAX_ROW][MAX_COL];
    char mine_map[MAX_ROW][MAX_COL];
    Init(show_map, mine_map);
    int safe_count = 0;
    //2.打印地图
    while(1){
        PrintMap(show_map);
        //3读取玩家输入的坐标，并校验
        int row = 0;
        int col = 0;
        GetPos (show_map, &row, &col);
        //4.尝试翻开对应坐标
        //a）翻开的坐标似是地雷，游戏失败
        if(mine_map[row][col]  == '1'){
            //是地雷，游戏结束
            printf("Game Over\n");
            break;
        }
        //b）翻开的坐标不是地雷，并且是最后一个不是地雷的格子，游戏获胜
        safe_count++;
        if(safe_count == MAX_ROW * MAX_COL - MINE_COUNT){
            printf("Game Win!\n");
            break;
        }
        //c）翻开的坐标不是地雷，更新show——map，给当前位置显示数字
        Update_Map(show_map, mine_map, row, col);
    }
    
}

int main(){
    Game();
    return 0;
}
