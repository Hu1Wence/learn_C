#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strchr(const char* arr, char a){
    assert(arr != NULL);
    char* p = (char*)arr;
    while (*p) {
        if(*p == a){
        return p;
        }else
            p++;
    }
    return NULL;
}

int main(){
    char arr[] = "cbcbecccd";
    char a = 'e';
    printf("%s\n", my_strchr(arr, a));
    return 0;
}
