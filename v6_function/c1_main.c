//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 19:43

#include <stdio.h>
#include "c3_fun.h"

void test_1() {
    //编译
    //gcc -o hello.exe c1_main.c c2_fun.c c3_fun.h c4_head.h
    int a = 10;
    int b = 20;

    printf("%d\n", max(a, b));
}

int main() {
    test_1();
    return 1;
}