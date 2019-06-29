//递归方式实现打印一个整数的每一位
#include <stdio.h>
void fun(int n){
    if(n > 9){
        fun(n / 10);
    }
    printf("%d ", n % 10);
}
int main(){
    int n;
    printf("请输入数字:");
    scanf("%d", &n);
    fun(n);
    return 0;
}
