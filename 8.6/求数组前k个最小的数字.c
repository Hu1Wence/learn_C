#include <stdio.h>
#include <stdlib.h>

int find_min(int a[], int k) {
    int i = 0;
    for (i = k; i > 0; i--) {
        if(a[i] < a[i - 1]) {
            int tmp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = tmp;
        }
    }
    return a[0];
}

int main() {
    int a[] = {8, 7, 5, 6, 7, 8, 9, 4, 7, 4, 3, 8};
    int k = 11;
    int ret = find_min(a, k);
    printf("%d\n", ret);
    
    return 0;
}
