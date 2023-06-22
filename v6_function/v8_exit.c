//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:56

# include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fun03() {
    printf("hello world1 \n");
    printf("hello world2 \n");
    printf("hello world3 \n");

    //终止程序执行
    exit(0);
    return;
    printf("hello world1\n");
    printf("hello world1\n");
    return;
}

void test_1() {
    fun03();

    printf("hello world a1 \n");
    printf("hello world b1 \n");
    printf("hello world c1 \n");
    exit(0);

    return -1;
    printf("hello world d1\n");
    printf("hello world f1\n");
}

int main() {
    test_1();
    return 1;
}