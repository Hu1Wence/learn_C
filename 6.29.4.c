//编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中的字符串操作函数
#include <stdio.h>
void reverse_string(char* string){
    if(*string == '\0'){
        printf("%c", *string);
    }else{
        reverse_string(++string);
        printf("%c", *string);
    }
}
int main(){
    char arr[] = "abcdef";
    reverse_string(arr);
    return 0;
}
