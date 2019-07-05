#include <stdio.h>

int count_one_bits(unsigned int value){
    int i;
    int count = 0;
    for(i = 0; i < 32; i++){
        if((value & (1 << i)) != 0){
            count++;
        }
    }
    return count;
}

int main(){
    unsigned int value = 15;
    printf("%d\n", count_one_bits(value));
    return 0;
}
