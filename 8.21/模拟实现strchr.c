#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

const char* my_strchr(const char* dest, char num) {
    assert(dest != NULL);
    while (*dest) {
        if (*dest == num) {
            return dest;
        }
        dest++;
    }
    return NULL;
}

int main() {
    char arr[] = "hello world";
    char a = 'l';
    printf("%s\n", my_strchr(arr, 'l'));
    
    return 0;
}
