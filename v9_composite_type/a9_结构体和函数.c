//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:53

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct student ss;
struct student {
    char name[21];
    //char *name;
    int age;
    int score[3];
    char addr[51];
};

void fun01(ss stu1) {
    //stu1.name = (char*)malloc(sizeof(char)*21);
    strcpy(stu1.name, "卢俊义");
    printf("%s\n", stu1.name);
}

int test_1() {
    ss stu = {NULL, 50, 101, "水泊梁山"};
    //stu.name = (char*)malloc(sizeof(char) * 21);
    strcpy(stu.name, "宋江");
    fun01(stu);
    printf("%s\n", stu.name);
    return EXIT_SUCCESS;
}


void fun02(ss *p) {
    strcpy(p->name, "公孙胜");
    printf("%s\n", p->name);
}

int test_2(void) {
    //结构体指针作为函数参数
    ss stu = {"吴用", 50, 101, "水泊梁山"};

    fun02(&stu);
    printf("%s\n", stu.name);
    return 0;
}

//数组作为函数参数退化为指针 丢失元素精度 需要传递个数
void BubbleSort(ss *stu, int len) {
    //printf("%d\n", sizeof(stu));

    for (int i = 0; i < len - 1; i++)
        for (int j = 0; j < len - i - 1; j++) {
            //if (stu[j].age>stu[j + 1].age)
            if ((stu + j)->age > (stu + j + 1)->age) {
                ss temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
}

int test_3(void) {
    ss stu[3] = {
            {"鲁智深", 30, 33, 33, 33, "五台山"},
            {"呼延灼", 45, 44, 44, 44, "汴京"},
            {"顾大嫂", 28, 33, 33, 33, "汴京"},
    };
    BubbleSort(stu, 3);

    for (int i = 0; i < 3; i++) {
        printf("姓名：%s\n", stu[i].name);
        printf("年龄：%d\n", stu[i].age);
        printf("成绩1：%d\n", stu[i].score[0]);
        printf("成绩2：%d\n", stu[i].score[1]);
        printf("成绩3：%d\n", stu[i].score[2]);
        printf("地址：%s\n", stu[i].addr);
    }
    return EXIT_SUCCESS
}


int main() {
    test_1();
    return 1;
}