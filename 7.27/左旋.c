#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void swap(char *x, char* y) {
    char tmp = '0';
    tmp = *x;
    *x = *y;
    *y = tmp;

}

int left_rot(char* arr1, char* arr2) {
    assert(arr1 != NULL);
    assert(arr2 != NULL);
    int len = strlen(arr1);
    int ret = 0;
    for(int i = 0; i < len ; i++){    //从0号下标的字符左旋到第几号下标的字符
        for(int j = 0; j < len - 1; j++){  //完成一次左旋
            swap(&arr1[j], &arr1[j + 1]);  //进行左旋操作
        }
        if(ret == strcmp(arr1, arr2)){
            ret = 1;
            break;
        }
    }
    return ret;
}

int main() {
    char arr1[] = "aabcd";
    char arr2[] = "bcdaa";
    //判断arr2是否是arr1左旋后的字符串
    int ret = left_rot(arr1, arr2);
    printf("%d\n", ret);
    
    return 0;
}
