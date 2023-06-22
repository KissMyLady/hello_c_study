//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:35

#include <stdio.h>

/**
 * 比较运算符
 */
void test_1() {
    int a = 10;
    int b = 20;
    int c = 10;

    // printf("%d\n", a != b);
    // 比较运算符返回值为0或者1 表示真或假

    printf("%d\n", c = ++a <= b * 2);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}

int main() {
    test_1();
    return 1;
}