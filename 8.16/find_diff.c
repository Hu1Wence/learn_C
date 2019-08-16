#include <stdio.h>
#include <stdlib.h>

void Find_diff(int arr[], int size) {
    int i = 0;
    int num = 0;
    for (i = 0; i < size; i++) {
        num ^= arr[i];
    }
    int count = 0;
    for (i = 0; i < 32; i++) {
        if (((num >> i) & 1) == 1) {
           count = i;
           break;
        }
    }
    int num1 = 0;
    int num2 = 0;
    for (i = 0; i < size; i++) {
        if (((arr[i] >> count) & 1) == 1) {
            num1 ^= arr[i];
        } else {
            num2 ^= arr[i];
        }
    }
    printf("%d %d\n", num1, num2);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    Find_diff(arr, size);

    return 0;
}
