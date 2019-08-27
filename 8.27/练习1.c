#include<stdio.h>
#include<stdlib.h>

//把英寸单位转换为厘米单位（1英寸=2.54厘米）
int main1()
{
    int x = 0;
    printf("请用户输入英寸值：");
    scanf("%d", &x);
    printf("%d英寸 = %lf厘米\n", x, x*2.54);
    
    return 0;
}
