#include <stdio.h>
#include <stdlib.h>

int Find_Num(int arr[], int size){
    int num = 0;
    for(int i = 0; i < size; i++){
        num ^= arr[i];
    }
    return num;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret = Find_Num(arr, size);
    printf("%d\n", ret);
    return 0;
}
