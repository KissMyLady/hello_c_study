//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:49

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
struct 技能
{
	名称
	等级
	伤害
	范围
	耗蓝
	冷却
}
struct 人物信息
{
	等级
	经验
	金钱
	hp
	mp
	力量
	智力
	敏捷
	struct 技能 skills[4]
}
struct 人物信息 info ;
info.skills[0].名称
*/

/*

struct 消费记录
{
	消费金额
	消费时间
	消费编号
	消费地点
	付款方式
	备注
}

struct 银行卡
{
	卡号
	密码
	持有人
	属性
	余额
	struct 消费记录[20]
}
*/


struct scores {
    int cl;   //c语言
    int cpp;  //C++
    int cs;   //C#
};

typedef struct student stu;
struct student {
    char name[21];
    int age;
    struct scores ss;
    char addr[51];
};


int test_1(void) {
    //struct student stu;
    stu s;

    printf("学生结构体大小：%d \n", sizeof(stu));
    printf("成绩结构体大小：%d \n", sizeof(s.ss));
    printf("名称数组大小：%d \n", sizeof(s.name));
}

int test_2() {
    //struct student stu = { "貂蝉",18,99,99,99,"徐州" };

    struct student stu;
    strcpy(stu.name, "小乔");
    stu.age = 20;
    stu.ss.cl = 88;
    stu.ss.cpp = 88;
    stu.ss.cs = 88;
    strcpy(stu.addr, "江东");

    printf("%s\n%d\n%d\n%d\n%d\n%s\n",
           stu.name, stu.age, stu.ss.cl, stu.ss.cpp, stu.ss.cs, stu.addr);

    system("pause");
    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}