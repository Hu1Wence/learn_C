//递归思想求斐波那契数列的第n项
#include <stdio.h>
int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n = 0;
    printf("请输入你想求斐波那契数列的第几项:");
    scanf("%d", &n);
    printf("斐波那契数列第%d项为:%d\n", n, fib(n));
    return 0;
}
//非递归思想求斐波那契数列的第n项
#include <stdio.h>
int fib(int n){
    int i = 1;
    int j = 1;
    int count = 3;
    int result = 0;
    if(n <= 2){
        return 1;
    }while(count <= n){
        result = i + j;
        i = j;
        j = result;
        count++;
    }
    return result;
}
int main(){
    int n;
    printf("请输入你想求斐波那契数列的第几项:");
    scanf("%d", &n);
    fib(n);
    printf("斐波那契数列第%d项为:%d\n", n, fib(n));
    return 0;
}
