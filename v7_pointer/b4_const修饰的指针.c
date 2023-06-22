//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:29

#include <stdio.h>

/**
 * 指针可修改常量的值
 */
void test_1() {
    //常量
    const int a = 10;
    const int b = 2052;

    //指针 --指向-> a的内存地址
    int * p = &a;

    //指针修改常量的值
    *p = b;

    printf("常量修改后的结果: %d\n", a);
}

/**
 * 常量指针
 */
void test_2() {
    int a = 870;
    int b = 20;

    //指向可以变, 指向内存区域不能修改
    const int *p = &a;

    // 1, 指针p的指向可以变
    p = &b; //ok

    // 2, 指针指向的内存区域不能变
    // *p = 100; //err

    printf("打印p: %d \n", p);
    printf("打印*p: %d \n", *p);
}


/**
 * 指针常量
 */
void test_3() {
    int a = 10;
    int b = 20;

    //内存可改, 指向不能改
    int *const p = &a;

    //p = &b; //err
    *p = 200; //ok

    printf("a %d \n", a);
}


void test_4() {
    int a = 10;
    int b = 20;

    //const修饰指针类型 修饰指针变量  只读指针
    const int *const p = &a;

    //二级指针操作
    // int **pp = &p;
    //*pp = &b;
    // **pp = 100;

    //printf("打印p: %d \n", p);
    //printf("打印*p: %d \n", *p);

    //p = &b;//err
    //*p = 100;//err
}

/**
 * const修饰的指针
 */
int main() {
    test_2();
    return 1;
}