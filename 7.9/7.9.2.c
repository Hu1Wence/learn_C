#include <stdio.h>

void reveser_word(char* arr, int left, int right) {
    while (left < right) {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main() {
    char arr[] = "student a am i";
    printf("%s\n", arr);
    int left = 0;
    int str = strlen(arr) - 1;
    int right = str;
    reveser_word(arr, left, right);
    printf("%s\n", arr);
    int i = 0;
    while(i <= str) {
        if(arr[i] != ' ') {
            left = i;
            while (arr[i] && arr[i] != ' ') {
                i++;
            }
            right = i - 1;
        }
        char tmp = 0;
        while (left <= right) {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
        i++;
    }
    printf("%s\n", arr);
    return 0;
}
