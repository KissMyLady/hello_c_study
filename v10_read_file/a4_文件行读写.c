//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:35

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int test_1() {
    FILE *fp = fopen("D:/a.txt", "r");
    if (!fp)
        return -1;

    char *p = (char *) malloc(sizeof(char) * 1024);
    memset(p, 0, 5);
    fgets(p, 5, fp);
    printf("%s\n", p);

    memset(p, 0, 5);
    fgets(p, 5, fp);
    printf("%s\n", p);


    free(p);
    fclose(fp);

    return EXIT_SUCCESS;
}


int test_2(void) {
    FILE *fp = fopen("D:/a.txt", "r");
    if (!fp)
        return -1;

    char *p = (char *) malloc(sizeof(char) * 100);

    //feof（文件指针）  判断文件是否到结尾 可以判断文本文件也可以判断二进制文件
    //如果到文件结尾返回值为 非0的值
    //如果没到文件结尾返回值为 0
    while (!feof(fp)) {
        memset(p, 0, 100);
        fgets(p, 100, fp);

        printf("%s", p);
    }

    free(p);
    fclose(fp);
    return 0;
}

int test_3(void) {
    FILE *fp = fopen("D:/b.txt", "w");
    if (!fp)
        return -1;

    char ch[] = "你瞅啥瞅你咋地";

    fputs(ch, fp);

    fclose(fp);
    return 0;
}

int test_4(void) {
    FILE *fp = fopen("D:/b.txt", "w");
    if (!fp)
        return -1;

    char *p = (char *) malloc(sizeof(char) * 1024);

    while (1) {
        memset(p, 0, 1024);
        //scanf("%s", p);
        //fgets()
        scanf("%[^\n]", p);
        //吞噬回车\n
        getchar();
        //停止输入命令  comm=exit
        if (!strcmp(p, "comm=exit"))
            break;
        //追加\n
        strcat(p, "\n");
        fputs(p, fp);
    }
    free(p);
    fclose(fp);

    return EXIT_SUCCESS;
}

//10+2=
//值 运算符 值 = \n  sprintf

int main() {
    test_1();
    return 1;
}