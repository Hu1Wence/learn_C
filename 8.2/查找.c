#include <stdio.h>
#include <string.h>

int is_left_move(char* arr1, const char* arr2){
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    if(len1 != len2){
        return 0;
    }
    char tmp[20] ="abcdefg";
    strncat(tmp, arr1, len1);
    if(strstr(tmp, arr2) == NULL){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    char arr1[20] = "abcdefg";
    char arr2[] = "defgabc";
    int ret = is_left_move(arr1, arr2);
    if(ret){
        printf("是\n");
    }else{
        printf("不是\n");
    }
    
    return 0;
}
