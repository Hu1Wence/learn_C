//
//#include<stdio.h>
//#include<string.h>
//void Func(char str_argp[2]) {
//    int m = sizeof(str_argp);
//    int n = strlen(str_argp);
//    printf("%d\n", m);
//    printf("%d\n", n);
//}
//int main() {
//    char str[] = "Hello";
//    Func(str);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    char* str[3] = {"stra", "strb", "strc"};
//    char* p = str[0];
//    int i = 0;
//    while (i < 3) {
//        printf("%s ", p++);
//        i++;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//char* myString() {
//    char buffer[6] = {0};
//    char* s = "hello World!";
//    for (int i = 0; i < sizeof(buffer) - 1; i++) {
//        buffer[i] = *(s + i);
//    }
//    return buffer;
//}
//
//int main() {
//    printf("%s\n", myString());
//
//    return 0;
//}
////#include <stdio.h>
//
//int main() {
//    int i = 1;
//    printf("%d, %d\n", sizeof(i++), i);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int fun(char* s) {
//    char* p = s;
//    while (*p != '\0') {
//        p++;
//    }
//    return (p - s);
//}
//
//int main() {
//    printf("%d\n", fun("goodbye!"));
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    const int i = 0;
//    int* j = (int*) &i;
//    *j = 1;
//    printf("%d, %d\n", i, *j);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int f(int x, int y) {
//    return (x & y) + ((x ^ y) >> 1);
//}
//
//int main() {
//    int result = f(2, 4);
//    printf("%d\n", result);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//void fun(int x, int y, int* c, int* d) {
//    *c = x + y;
//    *d = x - y;
//}
//
//int main() {
//    int a = 4, b = 3, c = 0, d= 0;
//    fun(a, b, &c, &d);
//    printf("%d %d\n", c, d);
//    return 0;
//}
//
//#define sum(a, b, c) a + b + c
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int i = 3;
//    int j = 2;
//    printf("%d\n", i * sum(i, (i + j), j));
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int f(int n) {
//    static int i = 1;
//    if(n >= 5)
//        return n;
//    n = n + i;
//    i++;
//    return f(n);
//}
//
//int main() {
//    printf("%d\n", f(1));
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int func() {
//    int i , j, k = 0;
//    for(i = 0, j = -1; j = 0; i++, j++) {
//        k++;
//    }
//    return k;
//}
//
//int main() {
//    printf("%d\n", (func()));
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int a= 2, *p1, **p2;
//    p2 = &p1;
//    p1 = &a;
//    a++;
//    printf("%d,%d,%d\n", a, *p1, **p2);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    int arr[] = {6, 7, 8, 9, 10};
//    int* ptr = arr;
//    *(ptr++) += 123;
//    printf("%d, %d", *ptr, *(++ptr));
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char a[] = "123456789", *p = a;
//    int i = 0;
//    while (*p) {
//        if (i % 2 == 0) *p = '!';
//        i++; p++;
//    }
//    puts(a);
//    return 0;
//}
