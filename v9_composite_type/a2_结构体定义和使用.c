//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:42

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


struct student {
    char name[21];
    int age;
    int score;
    char addr[51];
};
// stu = { "张三",18,100,"北京市昌平区北清路22号" };


int test_1() {
    //创建结构体变量
    //结构体类型 结构体变量

    //struct student stu;
    ////stu.name = "张三";
    //strcpy(stu.name, "张三");
    //stu.age = 18;
    //stu.score = 100;
    //strcpy(stu.addr, "北京市昌平区北清路22号");

    struct student stu = {
            "张三",
            18,
            100,
            "北京市昌平区北清路22号"
    };

    printf("姓名：%s \n", stu.name);
    printf("年龄：%d \n", stu.age);
    printf("成绩：%d \n", stu.score);
    printf("地址：%s \n", stu.addr);

    return EXIT_SUCCESS;
}

int test_2(void) {
    struct student stu;
    //手动输入
    scanf("%s%d%d%s", stu.name, &stu.age, &stu.score, stu.addr);

    printf("姓名：%s \n", stu.name);
    printf("年龄：%d \n", stu.age);
    printf("成绩：%d \n", stu.score);
    printf("地址：%s \n", stu.addr);
    return 0;
}

int main() {
    test_1();
    return 1;
}