#include <stdio.h>

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void fun(int* arr, int size){
    int bound = 0;
    int cur = 0;
    for(bound = 0; bound < size; bound++){
        for(cur = size - 1; cur > bound; cur--){
            if((arr[cur] & 1) == 1){
                swap (&arr[cur], &arr[cur - 1]);
            }
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    fun(arr, size);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
