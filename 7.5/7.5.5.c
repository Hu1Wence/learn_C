#include <stdio.h>
int different_bits(int m, int n){
    int count = 0;
    for(int i = 0; i < 32; i++){
        if((m & (1 << i)) != ((n & (1 << i)))){
            count++;
        }
    }
    return count;
}

int main(){
    int m = 1999;
    int n = 2299;
    printf("%d\n", different_bits(m, n));
    return 0;
}
