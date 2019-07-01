//冒泡排序
#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void fun(int* arr, int size){
    int bound;
    for(bound = 0; bound < size; bound++){
        for(int cur = size - 1; cur > bound; cur--){
            if(arr[cur - 1] > arr[cur]){
                swap(&arr[cur - 1], &arr[cur]);
            }
        }
    }
}

int main(){
    int arr[] = {2, 0, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    fun(arr, size);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
