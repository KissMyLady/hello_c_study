//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:19

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
enum 交易
{
	插卡，读卡，锁卡，输入密码，查询，取款，退卡，解锁
}
*/
enum TYPE {
    run, attack, skill, dance = 10, showUI, frozen = 20, dizz, dath, moti = 30
};

int test_1() {

    int value;

    while (1) {
        scanf("%d", &value);
        switch (value) {
            case run:
                printf("英雄正在移动中...\n");
                //value = 30;
                break;
            case attack:
                printf("英雄正在攻击中...\n");
                break;
            case skill:
                printf("英雄正在释放技能中...\n");
                break;
            case dance:
                printf("英雄正在跳舞中...\n");
                break;
            case showUI:
                printf("英雄正在显示徽章...\n");
                break;
            case frozen:
                printf("英雄被冰冻中...\n");
                break;
            case dizz:
                printf("英雄被眩晕中...\n");
                break;
            case dath:
                printf("英雄死亡...\n");
                return 0;
                break;
            case moti:
                printf("英雄等待释放命令...\n");
                break;

        }
    }
    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}