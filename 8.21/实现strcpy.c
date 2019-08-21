#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strcpy(char* dest, const char* src) {
    assert(dest != NULL && src != NULL);
    char* tmp = dest;
    while (*src) {
        *tmp = *src;
        src++;
        tmp++;
    }
    *tmp = *src;
    return dest;
}

int main() {
    char dest[] = "abcd";
    char src[] = "efgh";
    my_strcpy(dest, src);
    printf("%s\n",dest);
    
    return 0;
}
