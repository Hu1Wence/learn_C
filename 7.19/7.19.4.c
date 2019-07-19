#include <stdio.h>

int main() {
    int x;
    int y;
    printf("请输入两个数:");
    scanf("%d %d", &x, &y);
    int i = x;
    if(i > y) {
        i = y;
    }
    for(int j = i; j >= 1; j--){
        if(x % j == 0 && y % j ==0){
            printf("他们两个的最大公约数是:%d\n", j);
            break;
        }
    }
    
    return 0;
}
