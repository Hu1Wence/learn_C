//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int x = 0;
//    x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//    printf("%d", x);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int fun(int x) {
//    int count = 0;
//    while (x) {
//        count++;
//        x = x & (x - 1);
//    }
//    return count;
//}
//int main() {
//    printf("%d  ", fun(2019));
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int fun(int a, int b) {
//    if(a > b)
//        return (a + b);
//    else
//        return (a - b);
//}
//
//int main() {
//    int x = 3, y = 8, z= 6, r;
//    r = fun(fun(x, y), 2 * z);
//    printf("%d\n", r);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main() {
//    int s = 0, n;
//    for(n = 0; n < 4; n++) {
//        switch (n) {
//            case 1: s += 1;
//            case 2: s += 2;
//            case 3: s +=3;
//            default: s += 4;
//        }
//    }
//    printf("%d\n", s);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char* pcColor = "blue1";
//    char acColor[] = "blue1";
//    printf("%d\n", strlen(pcColor));
//    printf("%d\n", strlen(acColor));
//    printf("%d\n", sizeof(pcColor));
//    printf("%d\n", sizeof(acColor));
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    unsigned long ulA = 0x11000000;
//    printf("%x\n",  *(unsigned char*)&ulA);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int a = 1 << 3 + 2;
//    printf("%d\n", a);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    union X {
//        int x;
//        char y[4];
//    }a;
//    a.x= 0x11223344;
//    printf("%x\n", a.y[0]);
//    printf("%x\n", a.y[1]);
//    printf("%x\n", a.y[2]);
//    printf("%x\n", a.y[3]);
//    printf("%x\n", a.y[0]);
//    printf("%x\n", a.y[3]);
//
//    return 0;
//}

