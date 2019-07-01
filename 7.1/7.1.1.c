//创建一个有20个值的数组,前两项的值为2，3，之后的每一个值等于前两项的和.
#include <stdio.h>
int main(){
    int i = 2, j = 3;
    int count = 0;
    int result;
    int arr[20];
    for(int k = 1; k <= 20; k++){
        if(k == 1){
            arr[k] = 2;
            count++;
            printf("%d ", arr[k]);
        }else if(k == 2){
            arr[k] = 3;
            count++;
            printf("%d ", arr[k]);
        }else{
            arr[k] = i + j;
            result = i + j;
            i = j;
            j = result;
            count++;
           printf("%d ", arr[k]);
        }
    }
    printf("count = %d\n", count);
    return 0;
}
