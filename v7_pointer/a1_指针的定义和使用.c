//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 19:49

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void test_2() {
    //定义指针变量存储变量地址
    int a = 10;

    //指针类型 -> 数据类型*
    // p = &a;
    int * p = &a;

    //通过指针间接改变变量的值
    *p = 100;

    printf("打印&a: %p \n", &a);  //内存地址
    printf("打印p: %p \n", p);    //内存地址

    printf("打印a: %d \n", a);    //100
    printf("打印*p: %d \n", *p);  //100
}

void test_1() {
    int a = 0xaabbccdd;
    //a = 100;

    printf("打印内存地址 %p \n", &a);
    getchar();
}

/**
 * 指针的定义和使用
 */
int main() {
    test_2();
    return 1;
}