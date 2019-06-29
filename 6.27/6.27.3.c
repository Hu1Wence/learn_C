//交换两个数组的值。
#include <stdio.h>
int main(){
    int A[5], B[5];
    int i, j, k;
    printf("请输入5个数字\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &A[i]);
    }
    printf("请在输入5个数字\n");
    for(j = 0; j < 5; j++){
        scanf("%d", &B[j]);
    }
    for(k = 0; k < 5; k++){
        A[k] = A[k] + B[k];
        B[k] = A[k] - B[k];
        A[k] = A[k] - B[k];
    }
    for(i = 0; i < 5; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    for(j = 0; j < 5; j++){
        printf("%d ", B[j]);
    }
    printf("\n");
    return 0;
}
