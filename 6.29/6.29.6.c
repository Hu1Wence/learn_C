//编写一个函数实现n^k，使用递归实现
#include <stdio.h>
int fun(int n, int k){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(k == 1){
        return n;
    }else
        return n * fun(n, k -1);
}
int main(){
    int n, k;
    printf("根据公式n^k,输入n,k:");
    scanf("%d %d", &n,&k);
    printf("得到的结果为:%d\n", fun(n, k));
    return 0;
}
