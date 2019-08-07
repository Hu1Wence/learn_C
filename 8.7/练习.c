//#include <stdio.h>
//
//int fun(int x, int y) {
//    static int m = 0;
//    static int i = 2;
//    i += m + 1;
//    m = i + x + y;
//    return m;
//}
//
//int main() {
//    int j = 4;
//    int m = 1;
//    int k;
//    k = fun(j, m);
//    printf("%d,", k);
//    k = fun(j, m);
//    printf("%d", k);
//
//
//    return 0;
//}

//#include <stdio.h>
//
//enum A1
//{
//    x1,
//    y1,
//    z1 = 5,
//    a1,
//    b1
//};
//
//int main() {
//    enum A1 a = y1;
//    enum A1 b = b1;
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}

//#define cie(r) r*r
//
//#include <stdio.h>
//
//int main() {
//    int a = 1;
//    int b = 2;
//    int t;
//    t = cie(a + b);
//    printf("%d", t);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int m;
//    int n;
//    for(m = 0, n = -1; n = 0; m++, n++){
//        n++;
//    }
//    printf("%d,%d\n", m, n);
//    return 0;
//}
//
//#include <stdio.h>
//
//int a = 1;
//
//void test() {
//    int a = 2;
//    a += 1;
//}
//
//int main() {
//    test();
//    printf("%d\n", a);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int y;
//    int x;
//    y = 10;
//    x = y++;
//    printf("%d,%d\n", x, y);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int i = 0;
//    int j = 0;
//    if((++i > 0) || (++j) > 0) {    短路求值
//        printf("i = %d; j = %d\n", i ,j);
//    }
//    return 0;
//}

