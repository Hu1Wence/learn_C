#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("请输入三个数字:");
    scanf("%d %d %d", &a, &b, &c);
    int temp = 0;
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("从大到小的顺序是:%d>%d>%d\n", a, b, c);
    return 0;
}
