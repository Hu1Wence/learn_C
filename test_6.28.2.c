//计算1到100之间9出现了多少次。
#include <stdio.h>
int main(){
    int i;
    int count = 0;
    for(i = 1; i <= 100; i++){
        if (i / 10 == 9){
            count++;
        }
        if(i % 10 == 9){
            ++count;
        }
    }
    printf("count=%d\n", count);
    return 0;
}
