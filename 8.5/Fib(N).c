#include <stdio.h>
#include <stdlib.h>

//非递归
int Fib(int n) {
    int a = 1;
    int b = 1;
    int num = 0;
    if(n <= 2) {
        return 1;
    }
    for(int i = 3; i <= n; i++) {
        num = a + b;
        a = b;
        b = num;
    }
    return num;
}

int main() {
    int n = 0;
    printf("请输入求第几个斐波那契数:\n");
    scanf("%d", &n);
    printf("%d\n", Fib(n));

    return 0;
}

//递归
//int Fib(int n) {
//    if(n <= 2) {
//        return 1;
//    }
//    return Fib(n - 1) + Fib(n - 2);
//}
//
//int main() {
//    int n = 0;
//    printf("请输入求第几个斐波那契数:\n");
//    scanf("%d", &n);
//    printf("%d\n", Fib(n));
//
//    return 0;
//}
