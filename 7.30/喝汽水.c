#define doller 20 //定义给定多少钱
#define price 1   // 定义每瓶的价格
#include <stdio.h>
#include <stdlib.h>

int Drink_Water(int arr[]){
    int total = doller;
    int empty = doller;
    while (empty >= 2) {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    return total;
}

int main(){
    int arr[doller / price] = {0};
    int ret = Drink_Water(arr);
    printf("%d\n", ret);
    return 0;
}
