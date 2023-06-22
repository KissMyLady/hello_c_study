//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2、定义函数指针
//1、为已存在的数据类型起别名
typedef unsigned int ui;
typedef unsigned long long ull;

//typedef struct stu ss;
typedef struct stu {
    char name[21];
    int age;
    int score;
    char addr[51];
} ss;


int test_1() {
    ui a = 10;

    ull b = 20;
    ss stu;
    stu.name;
    printf("%d\n", a);
    printf("%d\n", b);

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}