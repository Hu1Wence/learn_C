//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
#include <stdio.h>
int DigitSum(int n){
    if(n < 10){
        return n;
    }
    return n % 10 +DigitSum(n / 10);
}
int main(){
    int n;
    printf("请输入你想求的数:");
    scanf("%d", &n);
    printf("%d返回的数字之和为%d\n", n, DigitSum(n));
    return 0;
}
