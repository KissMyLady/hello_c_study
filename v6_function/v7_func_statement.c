//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:54

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//函数声明

// extern int add01(int a, int b);
// int add01(int a, int b);
// extern int add(int a, int b);
int add01(int, int);

//函数定义
int add01(int a, int b) {
    return a + b;
}


void test_1() {
    //函数调用
    int a = add01(10, 20);
    printf("函数调用, 打印返回结果: %d \n", a);
}

int main() {
    test_1();
    return 1;
}