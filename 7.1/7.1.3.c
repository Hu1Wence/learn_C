//打印1！+ 2！+ 3！+ 4！+ 5！的值。
#include <stdio.h>
int main(){
    int i, j;
    int k = 0;
    int sum = 1;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= i; j++){
            sum = sum * j;
        }
        k = k + sum;
        sum = 1;
    }
    printf("%d\n", k);
    return 0;
}
