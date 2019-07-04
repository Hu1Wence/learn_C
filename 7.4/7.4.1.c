#include <stdio.h>
int main(){
    int days;
    printf("请输入天数:");
    scanf("%d", &days);
    while (days > 0){
    int weeks = days / 7;
    printf("%d days are %d weeks, %d days\n", days, weeks, days % 7);
    printf("请输入天数:");
    scanf("%d", &days);
    }
    return 0;
}
