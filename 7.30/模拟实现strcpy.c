#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char* arr1, const char* arr2){
    int len = strlen(arr2);
    int i = 0;
    for(i = 0; i < len; i++){
        arr1[i] = arr2[i];
    }
    arr1[i] = '\0';
}

int main(){
    char arr1[] = {};
    char arr2[] = "Hello!World!";
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);
    return 0;
}
