//折半查找
#include <stdio.h>
void fun(int arr[], int size, int n){
    int left = 0;
    int right = size - 1;
    
    while(left <= right){
        int mid = (left + right) / 2;
        if(n > arr[mid]){
            left = mid + 1;
        }else if(n < arr[mid]){
            right = mid - 1;
        }else{
            printf("找到了,是第%d个\n", mid);
            break;
        }
        if(left > right){
            printf("不存在\n");
        }
    }
}
int main(){
    int n = 9;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    fun(arr, size, n);
    return 0;
}
