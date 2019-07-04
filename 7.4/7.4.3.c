#include <stdio.h>
//方法一：
int main(){
    int num = -10;
    int i;
    int count = 0;
    for(i = 0; i < 32; i++){
       //如果这个表达式的值为0， 说明这个数字的第i 位就是0p；
        if((num & (1 << i)) != 0){
            ++count;
        }
    }
    printf("%d\n", count);
}
//方法二：
int main(){
    int num = 10;
    int i;
    int count = 0;
    while(num){
        count++;
        num = num % (num - 1);
    }
    printf("count = %d", count);
    return 0;
}
