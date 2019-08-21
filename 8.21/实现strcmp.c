#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strcmp(const char* arr1, const char* arr2) {
    assert(arr1 != NULL && arr2 != NULL);
    while (*arr1 != '\0' && *arr2 != '\0') {
        if (*arr1 > *arr2) {
            return 1;
        } else if (*arr1 < *arr2) {
            return -1;
        } else {
            arr1++;
            arr2++;
        }
    }
    if (*arr1 == '\0' && *arr2 != '\0') {
        return -1;
    } else if (*arr2 == '\0' && *arr1 != '\0') {
        return 1;
    } else
        return 0;
}
int main() {
    char arr1[] = "1ehe";
    char arr2[] = "2ehe";
    int ret = my_strcmp(arr1, arr2);
    printf("%d\n", ret);
    
    return 0;
}
