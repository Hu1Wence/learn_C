#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Left(char c[], int len , int k)
{
    k = k%len;
    char *p = (char *)malloc((2*len+1)*sizeof(char));
    strcpy(p, c);
    strcat(p, c);
    strncpy(c, p+k, len);
    free(p);
}

int main()
{
    char c[] = "ABCDE";
    int k = 2;
    int len = strlen(c);
    printf("左旋前：%s\n", c);
    Left(c,len,k);
    printf("左旋后：%s\n", c);
    return 0;
}
