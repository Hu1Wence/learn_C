#include <stdio.h>

void fib(int n){
    int a= 1;
    int b= 1;
    int c= 3;
    int num = 0;
    int count = 0;
    for(c = 3; c <= n; c++){
        num = a + b;
        a = b;
        b = num;
        count++;
    }
    printf("%d %d", num, count);
}

int main(){
  int n = 50;
    if(n <= 2){
        printf("1");
    }else{
        fib(n);
    }
        return 0;
}
