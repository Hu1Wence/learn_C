//打印1000年～2000年中间的闰年。
#include <stdio.h>
int main()
{
    int year=0;
    int count=0;
    for(year=1000;year<=2000;year++)
    {
        if(year%4==0)
        {
            if(year%100 !=0)
            {
                count++;
                printf("%d ",year);
            }
        }
        if (year%400==0)
        {
            count ++;
            printf("%d ",year);
        }
    }
    printf("\ncount=%d\n",count);
    return 0;
}

