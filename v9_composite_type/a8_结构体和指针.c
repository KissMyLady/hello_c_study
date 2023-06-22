//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:52

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct student {
    char *name;
    int age;
    int *scores;
    char *addr;
};

typedef struct student ss;


int test_1() {
    //通过结构体指针操作堆空间
    ss *p = (ss *) malloc(sizeof(ss) * 3);

    for (int i = 0; i < 3; i++) {
        //(p + i)->name;
        p[i].name = (char *) malloc(sizeof(char) * 21);
        p[i].scores = (int *) malloc(sizeof(int) * 3);
        p[i].addr = (char *) malloc(sizeof(char) * 51);
    }

    //手动输入
    for (int i = 0; i < 3; i++) {
        scanf("%s%d%d%d%d%s", p[i].name, &p[i].age, &p[i].scores[0],
              &p[i].scores[1], &p[i].scores[2], p[i].addr);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s ", p[i].name);
        printf("%d ", p[i].age);
        printf("%d ", p[i].scores[0]);
        printf("%d ", (p + i)->scores[1]);
        printf("%d ", (p + i)->scores[2]);
        printf("%s\n", (p + i)->addr);
    }

    //释放堆空间
    for (int i = 0; i < 3; i++) {
        free(p[i].name);
        free(p[i].scores);
        free(p[i].addr);
    }
    free(p);
    system("pause");
    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}