//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:49

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct student {
    char name[21];
    //char* name;//??
    int age;
    int score;
    char addr[51];
};

int test_1() {
    struct student stu = {"孙尚香", 26, 60, "巴蜀"};
    struct student s1 = stu;
    //int a = 10;
    //int b = a;
    //b = 20;

    //深拷贝和浅拷贝
    strcpy(s1.name, "甘夫人");

    s1.age = 28;
    s1.score = 80;

    printf("打印 stu.name %s \n", stu.name);
    printf("打印 stu.age %d \n", stu.age);
    printf("打印 stu.score %d \n", stu.score);

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}