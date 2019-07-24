#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {9, 5, 2, 7, 9, 5, 2};
    int num = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i <= size - 1; i++){
        num = num ^ arr[i];
    }
    printf("%d\n", num);
    return 0;
}


