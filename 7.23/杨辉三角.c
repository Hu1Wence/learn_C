#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int j = 0;
    int row;
    printf("请输入您想打印几行“杨辉三角”:");
    scanf("%d", &row);
    int arr[row][row];
    for(i = 0; i < row; i++){
        for(j = 0; j < row; j++){
            arr[i][j] = 0;
        }
    }
    for(i = 0; i < row; i++){
        for(j = 0; j < row; j++){
            if(j == 0){
                arr[i][j] = 1;
            }else if((i > 0) && (j > 0)){
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    for(i = 0; i < row; i++){
        for(j = 0; j < row; j++){
            if(i != j){
            printf("%d ", arr[i][j]);
            }else if(i == j){
            printf("1 ");
            break;
            }
        }
        printf("\n");
    }
    
    return 0;
}

