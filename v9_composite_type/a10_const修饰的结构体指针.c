//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:55

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


int test_1() {
    ss stu1 = {"孙悟空", 700, 101, 101, 101, "花果山"};
    ss stu2 = {"猪八戒", 1200, 1000, 1000, 1000, "高老庄"};

    //const修饰结构体指针类型
    const ss *p = &stu1;

    //p = &stu2;//OK
    //p->age = 888;//err
    //(*p).age = 888;//err

    return EXIT_SUCCESS;
}

int test_2(void) {
    ss stu1 = {"孙悟空", 700, 101, 101, 101, "花果山"};
    ss stu2 = {"猪八戒", 1200, 1000, 1000, 1000, "高老庄"};

    //const 修饰结构体指针变量
    ss *const p = &stu1;
    //p = &stu2;//err
    p->age = 888;
    strcpy(p->name, "沙悟净");

    return EXIT_SUCCESS;
}


int test_3(void) {
    ss stu1 = {"孙悟空", 700, 101, 101, 101, "花果山"};
    ss stu2 = {"猪八戒", 1200, 1000, 1000, 1000, "高老庄"};

    //const 修饰结构体指针类型
    //const 修饰结构体指针变量
    const ss *const p = &stu1;
    //p = &stu2;//err;
    //p->age = 888;//err
    ss **pp = &p;

    //*pp = &stu2;
    (*pp)->age = 888;
    (**pp).age = 888;

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}