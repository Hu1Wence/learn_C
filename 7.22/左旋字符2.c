
#include <stdio.h>
#include <stdlib.h>

void change(char* a, char* b){
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

void left_rot(char s1[], char s2[], int size){
    int i = 0;
    int count = 0;
    int bound = 0;
    for(bound = 0; bound < size - 1; bound++){
        for(i = 0; i < size - 2; i++){
            change(&s1[i], &s1[i + 1]);
        }
        for(i = 0; i < size - 1; i++){
            if(s1[i] == s2[i]){
                count++;
            }
        }
        if(count != 5){
            count = 0;
        }else if(count == (size - 1)){
            break;
        }
    }
    if(count == (size - 1)){
        printf("1\n");
    }else{
        printf("0\n");
    }
}

int main(){
    char s1[] = "AABCD";
    char s2[] = "BCDAA";
    int size = sizeof(s1) / sizeof(s1[0]);
    left_rot(s1, s2, size);
    
    return 0 ;
}

