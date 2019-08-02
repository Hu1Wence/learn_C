#include <stdio.h>
#include <string.h>
#include <assert.h>

void Swap(char* left, char* right){
    assert(left && right);
    while(left < right){
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
    
}

void left_move(char* arr, int i){
    assert(arr);
    int len = strlen(arr);
        Swap(arr, arr + i - 1);
        Swap(arr + i, arr + len - 1);
        Swap(arr, arr + len - 1);
}

int main() {
    char arr[] = "abcdfg";
    int i = 0;
    int len = strlen(arr);
    while (1) {
        printf("请输入左旋字符数量:\n");
        scanf("%d", &i);
        if(i <= len){
            left_move(arr, i);
            printf("%s\n", arr);
            break;
        }else{
            printf("旋转字符数量有误!\n");
        }
    }

    return 0;
}
