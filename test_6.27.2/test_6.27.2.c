//输入10个数，输出最大的那个数。
#include <stdio.h>
int main(){
    int i = 0, j = 0;
    int figure[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &figure[i]);
    }
    j = figure[0];
    for(i = 0; i < 10; i++){
        if(j < figure[i]){
            j = figure[i];
        }
    }
    printf("%d\n", j);
    return 0;
}
