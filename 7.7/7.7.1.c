#include <stdio.h>

unsigned int reverse_bit(unsigned int value) {
    unsigned int sum = 0;
    for(int i = 0; i < 32; i++) {
        sum += ((value >> i) & 1) << (31 - i);
    }
    return sum;
}

int main() {
    unsigned int value = 25;
    printf("%u\n", reverse_bit(value));
    return 0;
}
