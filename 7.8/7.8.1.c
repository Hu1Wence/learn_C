#include <stdio.h>
int main(){
    int a = 4;
    int b = 6;
    int ave = (a & b) + ((a ^ b) >> 1);
    printf("%d\n", ave);
    return 0;
}
