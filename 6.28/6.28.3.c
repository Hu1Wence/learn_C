//定义一个函数，从键盘上输出6个字符，然后逆序打印出来。
#include <stdio.h>
void fun(char  arr[], int size){
    int i, j;
    for(i = 0; i < size / 2; i++){
        j = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 -i] = j;
    }
}
int main(){
    int i;
    char  arr[6];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < 6; i++){
        scanf("%c", &arr[i]);
    }
    fun(arr, size);
    for (i = 0; i < 6; i++) {
        printf("%c", arr[i]);
    }
    return 0;
}
