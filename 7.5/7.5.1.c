#include <stdio.h>
int main(){
    int num = 9;
    int n = 3; // n为想将第n位变为1或0；
    //将16进制的第n位变为1.
    int ret = num | (1 << 3);
    printf("%x\n", ret);
    //将16进制的第n位变为0.
    int ret = num & ~(1 << 3);
    printf("%x\n", ret);
    return 0;
}
