
#include <stdio.h>
#include <string.h>

void Fun(int a) {
    int arr[20];
    int count = 0;
    int num = a;
    while (num > 9) {
        arr[count] = num % 10;
        num /= 10;
        count++;
    }
    arr[count] = num;
    int left = 0;
    int right = count;
    int yes = 0;
    for (int i = 0; i <= (count / 2) - 1; i++) {
        if(arr[left] == arr[right]) {
            left++;
            right--;
            yes++;
        }
    }
    if (yes == count / 2) {
        printf("是\n");
    } else
        printf("不是\n");
}

int main() {
    int a = 11234321;
    Fun(a);
    return 0;
}
