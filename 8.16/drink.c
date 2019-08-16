#include <stdio.h>
#include <stdlib.h>

int drink(int yuan) {
    int total = yuan;
    int empty = yuan;
    while (empty > 1) {
        total += empty / 2;
        empty =(empty / 2) + (empty % 2);
    }
    return total;
}

int main() {
    int yuan = 20;
    int ret = drink(yuan);
    printf("%d\n", ret);
    
    return 0;
}
    
