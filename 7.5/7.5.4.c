#include <stdio.h>

void all_bits(int num){
    for(int i = 0; i < 32; i++){
        if((num & (1 << i)) != 0){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }
}

int main(){
    int num = 15;
    all_bits(num);
    printf("\n");
    return 0;
}
