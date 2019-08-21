#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

const char* my_strstr(const char* str1, const char* str2) {
    assert(str1 != NULL && str2 != NULL);
    const char* start = str1;
    const char* tmp = str2;
    const char* check = start;
    while (*start) {
        check = start;
        while (*check == *tmp && *check != '\0' && *tmp != '\0') {
            check++;
            tmp++;
        }
        if(*tmp == '\0') {
            return start;
        }
        start++;
        tmp = str2;
    }
    return NULL;
}

int main() {
    char str1[] = "abcccdef";
    char str2[] = "ccd";
    printf("%s\n", my_strstr(str1, str2));
    
    return 0;
}
