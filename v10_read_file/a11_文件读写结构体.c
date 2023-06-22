//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:40

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student {
    char name[21];
    int age;
    int score;
    char addr[51];

} stu;

int test_1() {
    stu ss[3] = {
            {"黄某航", 9,  10,   "河北唐山"},
            {"马某羊", 3,  1000, "河北邯郸"},
            {"大法师", 30, 1,    "黑龙江大庆"}
    };

    FILE *fp = fopen("D:/d.txt", "wb");
    if (!fp)return -1;

    for (int i = 0; i < 3; i++) {
        fwrite(&ss[i], sizeof(stu), 1, fp);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}


int test_2(void) {
    FILE *fp = fopen("D:/d.txt", "rb");
    if (!fp)return -1;
    stu *ss = (stu *) malloc(sizeof(stu) * 3);

    int i = 0;
    while (1) {
        if (feof(fp))
            break;
        fread(&ss[i], sizeof(stu), 1, fp);
        i++;
    }

    for (int j = 0; j < 3; j++) {
        printf("遍历打印 - >姓名：%s \n", ss[j].name);
        printf("遍历打印 - >年龄：%d \n", ss[j].age);
        printf("遍历打印 - >成绩：%d \n", ss[j].score);
        printf("遍历打印 - >地址：%s \n", ss[j].addr);
    }
    free(ss);
    fclose(fp);
    return 0;
}

int main() {
    test_1();
    return 1;
}