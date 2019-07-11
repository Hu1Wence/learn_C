
#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//因为要返回位置坐标（两个值），考虑到函数只能有一个返回值，所以这里采用了封装成结构体的方式
typedef struct Position
{
    int x;
    int y;
}Position;
Position FindNum(int(*arr)[COL],int data)
{
    //从最右上角开始查找，如果找到就返回对应位置坐标，没找到对应的坐标则为-1，-1
    Position p;
    p.x = -1;
    p.y = -1;
    int row = 0;
    int col = COL - 1;
    while (row < ROW&&col >= 0)
    {
        if (data == arr[row][col])
        {
            p.x = row;
            p.y = col;
            return p;
        }
        else if (data>arr[row][col])
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    return p;
}

int main()
{
    int arr[ROW][COL] = { { 1, 2, 3 }, { 4, 5, 6 },{ 7, 8, 9 } };
    int key = 0;
    printf("请输入要查找的数字：");
    scanf("%d", &key);
    Position p1=FindNum(arr, key);
    if (p1.x != -1 && p1.y != -1)
    {
        printf("找到了，下标为%d %d\n", p1.x, p1.y);
    }
    else
    {
        printf("不存在\n");
    }
    
    return 0;
}
