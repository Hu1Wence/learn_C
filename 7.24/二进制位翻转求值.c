#include <stdio.h>

unsigned int reverse_bit(unsigned int value)
{
    int i = 0;
    unsigned int sum = 0;
    for(i = 0 ; i < 32; i++){
        sum = sum + (((value >> i) & 1) << (31 - i));
    }
    return sum;
}

int main() {
    unsigned int value = 25;
    int ret = reverse_bit(value);
    printf("%u\n", ret);
    return 0;
}
