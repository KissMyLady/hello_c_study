//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:39

#include <stdio.h>


#define MAX(a, b) (a)>(b)?(a):(b)

/**
 * 三目运算符
 */
void test_1() {
    int a = 10;
    int b = 20;

    printf("%d \n", MAX(a, b));
}

void test_2() {
    int a = 10;
    int b = 20;
    int c;

    //int c;
    //表达式1?表达式2:表达式3

    c = a > b ? a : b;

    int v1 = a > c ? a : c;
    int v2 = b > c ? b : c;

    printf("表达式1, 最大值为：%d\n", c);

    printf("表达式2, 最大值为：%d\n", a > b ? v1 :v2);
}

int main() {
    test_2();
    return 1;
}