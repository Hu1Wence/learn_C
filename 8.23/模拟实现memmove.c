#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* my_memmove(void* dest, void* sour, int num) {
    assert(dest != NULL && sour != NULL);
    char* pdest = (char*)dest;
    char* psour = (char*)sour;
    if (pdest >= psour && pdest <= (psour + num - 1)) {
        //缓冲区重叠，从前往后拷贝
        pdest = pdest + num - 1;
        psour = psour  + num - 1;
        for (int i = 0; i < num; i++) {
            *pdest = *psour;
            pdest--;
            psour--;
        }
    } else {
        //不重叠，正常拷贝就行
        for (int i = 0; i < num; i++) {
            *pdest = *psour;
            pdest++;
            psour++;
        }
    }
    return dest;
}

int main() {
    int dest[4] = {0};
    int sour[4] = {1, 2, 3, 4};
    my_memmove(dest, sour, sizeof(dest));
    for (int i = 0; i < 4; i++) {
        printf("%d ",dest[i]);
    }
    
    return 0;
}
