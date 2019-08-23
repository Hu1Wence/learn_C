#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* sour, int num) {
    assert(dest != NULL && sour != NULL);
    char* pdest = (char*) dest;
    char* psour = (char*) sour;
    for (int i = 0; i < num; i++) {
        *pdest = * psour;
        pdest++;
        psour++;
    }
    return dest;
}

int main() {
    int dest[4] = {0};
    int sour[4] = {1, 2, 3, 4};
    my_memcpy(dest, sour, sizeof(dest));
    for (int i = 0; i < 4; i++) {
        printf("%d ", dest[i]);
    }
    
    return 0;
}
