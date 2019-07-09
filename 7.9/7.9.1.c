#include <stdio.h>

int different(int arr[], int size){
    int i;
    int different_num = arr[0];
    for(i = 0; i < size - 1; i++){
        different_num = different_num ^ arr[i + 1];
    }
    return different_num;
}

int main(){
    int arr[] = {9, 5, 2, 7, 2, 7, 5, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret= different(arr, size);
    printf("%d\n", ret);
    return 0;
}
