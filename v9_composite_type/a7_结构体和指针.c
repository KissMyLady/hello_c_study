//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:51

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//结构体成员为指针类型
struct student {
    char *name;
    int age;
    int *scores;
    char *addr;
};

int test_1() {
    struct student stu;
    //stu.name = "张三";
    stu.name = (char *) malloc(sizeof(char) * 21);
    stu.scores = (int *) malloc(sizeof(int) * 3);
    stu.addr = (char *) malloc(sizeof(char) * 51);
    strcpy(stu.name, "张三");

    stu.age = 18;
    stu.scores[0] = 88;
    stu.scores[1] = 99;
    stu.scores[2] = 100;
    strcpy(stu.addr, "北京市");

    printf("%s \n", stu.name);
    printf("%d \n", stu.age);
    printf("%d \n", stu.scores[0]);
    printf("%d \n", stu.scores[1]);
    printf("%d \n", stu.scores[2]);
    printf("%s \n", stu.addr);

    free(stu.name);
    free(stu.scores);
    free(stu.addr);

    return EXIT_SUCCESS;
}

struct stu {
    char name[21];
    int age;
    int scores[3];
    char addr[51];
};

int test_2(void) {
    //结构体指针
    struct stu ss = {"林冲", 30, 100, 100, 100, "汴京"};
    struct stu *p = &ss;
    //printf("%s\n", (*p).name);
    //printf("%d\n", (*p).age);

    //结构体指针->成员
    //结构体变量.成员
    printf("%s \n", p->name);
    printf("%d \n", p->age);
    printf("%d \n", p->scores[0]);
    printf("%d \n", p->scores[1]);
    printf("%d \n", p->scores[2]);
    printf("%s \n", p->addr);

    return 0;
}

int main() {
    test_1();
    return 1;
}