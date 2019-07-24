#include <stdio.h>
int Add(int a, int b){
    int add = 0;
    int Move = 0;
    do{
        add = a ^ b;
        Move = (a & b) << 1;
        a = add;
        b = Move;
    }while(Move != 0);

    add = add >> 1;
    return add;
}

int main(){
    int a = 3;
    int b = 5;
    int ret = Add(a, b);
    printf("%d\n", ret);
    return 0;
}
