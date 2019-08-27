#include<stdio.h>
#include<stdlib.h>

int main31()
{
    int num = 0;
    printf("输入一个ASCII码值（如66）：");
    scanf("%d", &num);
    printf("%c\n", num);
    
    return 0;
}

int main32()
{
    printf("\a");
    printf("Startled by the sudden sound,Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");
    
    return 0;
}

int main33()
{
    float num = 0.0;
    printf("Enter a floating-point value:");
    scanf("%f", &num);
    printf("fixed-point notation:%f\n", num);
    printf("exponential notation:%e\n", num);
    
    return 0;
}

int main34()
{
    int age = 0;
    printf("请输入您的年龄：\n");
    scanf("%d", &age);
    printf("%d岁的年龄转换成秒数为%lf秒\n", age, age*3.156*10e7);
    
    return 0;
}

int main35()
{
    int water = 0;
    printf("请输入水的夸脱数：\n");
    scanf("%d", &water);
    printf("%d夸脱的水中水分子数量为%lf个\n", water, water*950/(3.0*10e-23));
    
    return 0;
}

int main36()
{
    int height = 0;
    printf("请输入您的身高（英寸）：\n");
    scanf("%d", &height);
    printf("您的身高为%lf厘米\n", height*2.54);
    
    return 0;
}
