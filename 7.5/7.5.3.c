#include <stdio.h>

void odd_bits(int num){
    for(int i = 1; i < 32; i = i + 2){
        if((num & (1 << i)) != 0){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
}
void even_bits(int num){
    for(int i = 0; i < 32; i = i + 2){
        if((num & (1 << i)) != 0){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
}

int main(){
    int num = 19;
    odd_bits(num);
    printf("\n");
    even_bits(num);
    return 0;
}
