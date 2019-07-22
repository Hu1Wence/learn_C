#define row 4
#define col 4


#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[row][col] = {
        1, 2, 8, 9,
        2, 4, 9, 12,
        4, 7, 10, 13,
        6, 8, 11, 15
    };
    int i = 0;
    int j = 0;
    int num = 0;
    int count = 0;
    printf("请输入想查找的数字:");
    scanf("%d", &num);
    for(i = 0; i < 4 ; i++){
        for(j = 3; j >= 0; j--){
            if(arr[i][j] == num){
                printf("找到了，数字%d在第%d行第%d列\n", num, i + 1, j + 1);
                break;
            }else{
                count++;
            }
        }
    }
    if(count == (row * col)){
        printf("数组中没有%d,查找失败\n", num);
    }
    return 0;
}
