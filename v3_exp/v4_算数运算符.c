//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:32

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * 算数运算符
 */
void test_1() {
    //0不能作为除数
    int a = 10;
    int b = 0;

    //printf("%d\n", a / b);
    //取余只能对整型操作
    printf("%d\n", a % b);
}

void test_2() {
    int a = 10;
    //a = a + 1;  //11
    //a++;  // 后自增
    //++a;  // 前自增

    // 前自增是在表达式之前进行++在进行表达式计算
    // 后自增先进行表达式计算在进行++操作
    //int b = ++a * 10;
    //a++;

    int b = a * 10;
    printf("%d\n", b);
    printf("%d\n", a);
}

void test_3() {
    int a = 10;

    //a--;
    //二义性
    int b = ++a + --a + a++;
    printf("%d \n", a);   //11
    printf("%d \n", b);  //30
}

int main() {
    test_3();
    return 1;
}