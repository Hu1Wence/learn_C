#include<stdio.h>
int main(){
    int i;
    int A[3], B[3];
    printf("请输入A数组的3个数字:");
    for(i = 0; i < 3; i++){
        scanf("%d",&A[i]);
    }
    printf("请再输入B数组的3个数字:");
    for(i = 0; i < 3; i++){
        scanf("%d",&B[i]);
    }
    for(i = 0; i < 3; i++){
        A[i] = A[i] + B[i];
        B[i] = A[i] - B[i];
        A[i] = A[i] - B[i];
    }
    printf("交换后A数组的值为:");
    for(i = 0;i < 3; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("交换后B数组的值为:");
    for (i = 0; i < 3; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    return 0;
}
