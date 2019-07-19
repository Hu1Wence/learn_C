#include <stdio.h>

int main() {
    int i = 0;
    double num = 0;
    for(i = 1; i <= 100; i++){
        if((i & 1) == 1){
            num = num + (1.0 / i);
        }else if((i % 1) == 0){
            num = num + (1.0 / i) * (-1);
        }
    }
    printf("%lf\n", num);
    return 0;
}
