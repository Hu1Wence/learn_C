
#include <stdio.h>
#include <stdlib.h>

int all_xor(int arr[], int size) {
    int num = 0;
    int i = 0;
    for(i = 0; i < size; i++) {
        num = num ^ arr[i];
    }
    return num;
}

void Find_diff(int arr[], int size) {
    int num = all_xor(arr, size);
    int i = 0;
    int pos = 0;
    for(i = 0; i < 32; i++) {
        if(((num >> i) & 1) == 1) {
            pos = i;
            break;
        }
    }
    int num1 = 0;
    int num2 = 0;
    for(i = 0; i < size; i++) {
        if(((arr[i] >> pos) & 1) == 1) {
            num1 ^= arr[i];
        } else {
            num2 ^= arr[i];
        }
    }
    printf("不同的是%d, %d\n", num1, num2);
}

int main() {
    int arr[] = {1, 3, 5, 7, 1, 3, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Find_diff(arr, size);
    
    return 0;
}
