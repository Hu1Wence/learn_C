#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcpy(char* str, const char* sour) {
    assert(str != NULL && sour != NULL);
    int len = strlen(sour);
    for (int i = 0; i < len; i++) {
        str[i] = sour[i];
    }
    str[len] = '\0';
    return str;
}

int main() {
    char A[]  = "CDEDdd";
    char B[] = "dddddd";
    my_strcpy(A, B);
    printf("%s\n%s\n", A, B);

    return 0;
}
