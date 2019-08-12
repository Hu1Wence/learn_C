
#include<stdio.h>

void swap(int* x, int* y) {
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int Fun(int arr[], int size) {
    int bound = 0;
    int cur = size - 1;
    for (bound = 0; bound < size; bound++) {
        for (cur = size - 1; cur > bound; cur--) {
            if (arr[cur] < arr[cur - 1]) {
                swap(&arr[cur], &arr[cur - 1]);
            }
        }
    }
    return arr[(size - 1) / 2];
}

int main() {
    int arr[] = {1,2,3,4,4,4,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret = Fun(arr, size);
    printf("%d\n", ret);
    
    return 0;
}
