#include <stdio.h>

void find_no_double_num(int* arr, int size, int* num1, int* num2){
    int ret = 0;
    int pos = 0;
    for(int i = 0; i < size; i++){
        ret ^= arr[i];
    }
    
    for(int i = 0; i < 32; i++){
        if(((ret >> i) & 1) == 1){
            pos = i;
            break;
        }
    }
    for(int i = 0; i < size; i++){
        if(((arr[i] >> pos) & 1) == 1){
            *num1 ^= arr[i];
        }
    }
    *num2 = *num1 ^ ret;
}

int main(){
    
    int arr[] = {1,1,2,2,3,3,4,4,21,53};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num1 = 0;
    int num2 = 0;
    find_no_double_num(arr, size, &num1, &num2);
    printf("%d   %d\n", num1, num2);



}
