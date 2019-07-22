#include <stdio.h>
#include <stdlib.h>

void change(char* a, char* b){
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

void left_rot(char arr[], int size){
    int bound = 0;
    int i = 0;
    int input = 0;
    printf("请输入您想左旋几个字符?\n");
    scanf("%d", &input);
    for(bound = 0; bound < input; bound++){
        for(i = 0; i < size - 1; i++){
            change(&arr[i], &arr[i + 1]);
        }
    }
    printf("左旋后的字符串为:");
    for(i = 0; i < size; i++){
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main(){
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("待旋转的字符串为:");
    for(int i = 0; i < size; i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
    left_rot(arr, size);
    
    return 0 ;
}
