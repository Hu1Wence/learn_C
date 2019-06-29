//递归和非递归分别实现求n的阶乘
//非递归代码：
#include<stdio.h>
int mystrlen(char* string)
{
    int count = 0;
    while (*string != '\0')
    {
        count++;
        string++;
    }
    return count;
}
int main()
{
    char string[] = "abcdefghijk";
    int ret = mystrlen(string);
    printf("%d\n", ret);
    return 0;
}
//递归代码：
#include<stdio.h>
int mystrlen(char* string)
{
    if (*string != '\0')
    {
        return 1 + mystrlen(string + 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char string[] = "abcdefghijk";
    int ret = mystrlen(string);
    printf("%d\n", ret);
    system("pause");
    return 0;
}
