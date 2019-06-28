//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#include <stdio.h>
int main(){
    int i;
    double  j = 0.0, add = 0.0, odd = 0.0;
    for(i = 1; i <= 100; i++){
        if(i % 2 == 0){
            add = add + 1.0/i;
        }
        else if(i % 2 != 0){
            odd = odd + 1.0/i;
        }
    }
    j = odd - add;
    printf("%lf\n", j);
    return 0;
}
