//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:22

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void test_1() {
    FILE *fp = fopen("/home/mylady/code/shell_script/logs/val_log.txt", "r");

    //1、找不到文件
    //2、文件权限（读 写 执行）
    //3、程序打开文件超出上限 65535
    if (fp == NULL) {
        printf("打开文件失败 \n");
        return -1;
    }

    printf("文件打开成功: %p \n", fp);
    fclose(fp);
}

int main() {
    test_1();
    return 1;
}