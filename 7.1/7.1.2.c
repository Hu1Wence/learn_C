//打印100到1000d之间的素数。
#include <stdio.h>
int main(){
    int i, j;
    for(i = 100; i <= 1000; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(j >= i){
            printf("%d ", i);
        }
    }
    return 0;
}
