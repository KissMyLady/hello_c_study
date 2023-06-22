//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:47

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student ss;

struct student {
    //结构体成员需要偏移对齐
    char name[21];
    int age;
    char sex;
    int score[3];
    char addr[51];
};

int test_1() {

    //printf("%d\n", sizeof(struct student));

    ss *p = (ss *) malloc(sizeof(ss) * 3);
    printf("结构体指针大小：%d", sizeof(ss *));

    //手动输入
    for (int i = 0; i < 3; i++) {
        scanf("%s%d,%c%d%d%d%s",
              p[i].name,
              &p[i].age,
              &p[i].sex,
              &p[i].score[0],
              &p[i].score[1],
              &p[i].score[2],
              p[i].addr
              );
    }

    for (int i = 0; i < 3; i++) {
        printf("遍历 -> 姓名：%s \n", p[i].name);
        printf("遍历 -> 年龄：%d \n", p[i].age);
        printf("遍历 -> 性别：%s \n", p[i].sex == 'M' ? "男" : "女");
        printf("遍历 -> 成绩1：%d \n", p[i].score[0]);
        printf("遍历 -> 成绩2：%d \n", p[i].score[1]);
        printf("遍历 -> 成绩3：%d \n", p[i].score[2]);
        printf("遍历 -> 地址：%s \n", p[i].addr);
    }

    free(p);
    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}