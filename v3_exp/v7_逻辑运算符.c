//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:36

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


/**
 * 逻辑运算符
 */
void test_1() {
    //所有非0的值都是真值
    //! 非  非真为假 非假为真
    //int a = 123;
    //printf("%d\n", !a);

    //int a = 10;
    //int b = 20;
    ////单目运算符高于双目运算符
    //// && 与 同真为真 其余为假
    //printf("%d\n", !a && b);

    int a = 1;
    int b = 1;
    //|| 或 同假为假 其余为真
    printf("%d\n", a || b);
}


void test_2() {
    int a = 10;
    int b = 20;
    int c = b = 30;

    printf("b的结果是: %d \n", b);
    printf("c的结果是: %d \n", c);
}

int main() {
    test_1();
    return 1;
}