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
    int ret = 0;
    printf("请输入想查找的数字:");
    scanf("%d", &num);
    for(i = 0; i < 4 ; i++){
        for(j = 3; j >= 0; j--){
            if(num == arr[i][j]){
                printf("找到了，数字%d在第%d行第%d列\n", num, i + 1, j + 1);
                ret = 1;
                break;
            }else if(num > arr[i][j]){   //如果查找数大于某一行最后一个数那么久直接跳过当前行
                count = count + 4;
                break;
            }else if(num != arr[i][j]){
                count++;
            }
        }
        if(ret == 1){
            break;
        }
    }
    if(count == (row * col)){
        printf("数组中没有%d,查找失败\n", num);
    }
    
    return 0;
}

