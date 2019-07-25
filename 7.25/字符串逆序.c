#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void reverve_swap(char *left, char *right)
{
    assert(left != NULL); //断言不是空指针
    assert(right != NULL);
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

char* reverve(char* arr){
    int len = strlen(arr);
    char* start = arr;
    char* end = NULL;
    reverve_swap(arr, arr + len - 1);
    while(*arr){
        start = arr;
        while ((*arr != ' ') && (*arr != '\0')) //找到一块单词
        {
            arr++;
        }
        end = arr - 1;
        reverve_swap(start, end);//逆序单个单词
        if (*arr == ' ') //找到空格
            arr++;
    }
    return arr;
}


int main(){
    char arr[] = "student a am i";
    printf("%s\n", arr);
    reverve(arr);
    printf("%s\n", arr);
    
    
}


