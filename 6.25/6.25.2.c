//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
#include<stdio.h>
void fun(int x){
    int i, j;
    for(i = 1; i <= x; i++){
        for(j = 1; j <= i; j++){
            printf("%d*%d=%-2d ", i, j, i*j);
        }
        printf("\n");
    }
}
int main(){
    int x = 0;
    printf("请输入你想打印到哪个数的乘法口诀表\n");
    scanf("%d", &x);
    fun(x);
    return 0;
}
