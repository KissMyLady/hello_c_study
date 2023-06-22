//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:56

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

union Var {
    int a;
    float b;
    double c;
    char d;
    short f[6];  //12
};

int test_1() {
    union Var var;

    var.a = 100;
    var.b = 3.14;

    printf("%d \n", var.a);
    printf("%f \n", var.b);


    printf("大小：%lu \n", sizeof(var));

    printf("打印 &var: %p \n", &var);
    printf("打印 &var.a %p \n", &var.a);
    printf("打印 &var.b %p \n", &var.b);
    printf("打印 &var.c %p \n", &var.c);
    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}