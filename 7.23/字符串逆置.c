#include <stdio.h>
#include <stdlib.h>

int my_stl(char arr[]) {
    if(*arr != '\0')
        return 1 + my_stl(arr + 1);
    else
        return 0;
}

void reverse(char arr[]) {
    int len = my_stl(arr);
    char tmp = arr[0];
    arr[0] = arr[len - 1];
    arr[len - 1] = '\0';
    if(my_stl(arr + 1) >= 2){
        reverse(1 + arr);
    }
    arr[len - 1] = tmp;
    
}

int main(){
    char arr[] = "abcdef";
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}
