#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* my_strstr(char* dest, const char* sor){
    assert(dest != NULL);
    assert(sor != NULL);
    char* arr1 = dest;
    char* arr2 = sor;
    char* start = arr1;
    while (arr1) {
        start = arr1;
        while (*start != '\0' && *arr2 != '\0' && *start == *arr2) {
            start++;
            arr2++;
        }
        if(*arr2 == '\0')
        {
            return arr1;
        }
        arr2 = sor;
        arr1++;
    }
    return NULL;
}

int main(){
    char arr1[] = "abbbde";
    char arr2[] = "bbd";
    printf("%s\n", my_strstr(arr1, arr2));
    
    return 0;
}
