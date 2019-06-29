//非递归实现求n的阶乘
#include <stdio.h>
int fun(int n){
    int i = 0, j = 1;
    if(n == 1){
        return 1;
    }
    for(i = 1; i <= n; i++){
        j = i * j;
    }
    return j;
}
int main(){
    int n;
    printf("请输入想求几的阶乘:");
    scanf("%d", &n);
    fun(n);
    printf("%d的阶乘是:%d\n", n, fun(n));
    return 0;
}
//递归实现求n的阶乘
#include <stdio.h>
int fun(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fun(n - 1);
    }
}
int main(){
    int n;
    printf("请输入想求几的阶乘:");
    scanf("%d", &n);
    fun(n);
    printf("%d的阶乘是:%d\n", n, fun(n));
    return 0;
}
