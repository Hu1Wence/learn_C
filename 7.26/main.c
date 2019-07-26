#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char* a, char* b) {
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

int left_rot(char* s1, char* s2)
{
    int i = 0;
    int size = strlen(s1);
    int bound = 0;
    int result = 0;
    for(bound = 0; bound < size - 1; bound++)
    {
        for(i = 0; i < size - 1; i++)
        {
            change(&s1[i], &s1[i + 1]);
            if(strcmp(s1, s2) == 0)
            {
                result = 1;
                break;
            }
        }
        if(result == 1)
            break;
    }
    if(result == 1)
        return 1;
    else
        return 0;
}

int main()
{
    char s1[] = "AABCD";
    char s2[] = "BCDAA";
    printf("%d\n",  left_rot(s1, s2));
    
    return 0 ;
}
    
