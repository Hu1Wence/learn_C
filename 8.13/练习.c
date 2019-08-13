//#include <stdio.h>
//
//int main() {
//    unsigned long pulArray[] = {6, 7, 8, 9, 10};
//    unsigned long *pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 2) += 2;
//    printf("%d, %d\n", *pulPtr, *(pulPtr + 2));
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    char* szStr = "abcde";
//    szStr += 2;
//    printf("%lu\n", szStr);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int i ;
//    char acNew[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
//    for (i = 0; i < 10; i++) {
//        acNew[i] = '0';
//    }
//    printf("%d\n", strlen(acNew));
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void foo(int b[][3]) {
//    ++b;
//    b[1][1] = 9;
//}
//
//int main() {
//    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//    foo(a);
//    printf("%d", a[2][1]);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//    int i = 10;
//    long long t = sizeof(i++);
//    printf("%d", i);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//    int a = 2, b = 5;
//    printf("%d",(a = 2, b= 5 , a++, b++, a+b));
//
//    return 0;
//}
