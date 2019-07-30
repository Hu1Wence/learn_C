#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char* my_strcat(char* arr1, const char* arr2){
    assert(arr1 != NULL);
    assert(arr2 != NULL);
    char* tmp = arr1;
    while (*arr1){
        arr1++;
    }
    while ((*arr1++ = *arr2++) != '\0'){
        ;
    }
    return tmp;
}

int main(){
    char arr1[20] = "Hello,World!";
    char* arr2 = "Hello,Bite!";
    my_strcat(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}
