#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* str, const char* sour) {
    assert(str != NULL && sour != NULL);
    char* tmp = str;
    while (*str) {
        str++;
    }
    while ((*str++ = *sour++) != '\0') {
        ;
    }
    return tmp;
}

int main() {
    char A[] = "abc";
    char B[] = "def";
    my_strcat(A, B);
    printf("%s\n",A);
    
    
    return 0;
}
