//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:27

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int test_1() {
    FILE *fp = fopen("D:/a.txt", "r");
    if (!fp) {
        printf("文件打开失败\n");
        return -1;
    }

    char ch;

    //文件的字符读取
    //文件默认结尾为-1
    ch = fgetc(fp);
    printf("%c \n", ch);

    //不能修改文件指针  文件在读取时光标流会自动向下移动
    //fp++;//err
    ch = fgetc(fp);
    printf("%c \n", ch);

    //关闭文件
    fclose(fp);

    return EXIT_SUCCESS;
}


int test_2(const char *filePath) {
    //FILE* fp = fopen("D:/a.txt", "r");
    //FILE *fp = fopen("D:/源文件.txt", "r");
    FILE *fp = fopen(filePath, "r");
    if (!fp)
        return -1;

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 1;
}

int test_3(const char *filePath) {
    //以写的方式打开文件 如果文件不存会创建一个新文件  如果文件存在 会清空内容
    //FILE *fp = fopen("D:/b.txt", "w");
    FILE *fp = fopen(filePath, "w");
    if (!fp)
        return -1;

    char ch = 'a';

    //字符写入
    fputc(ch, fp);

    fclose(fp);
    return 0;
}

int test_4(void) {
    FILE *fp = fopen("D:/a.c", "w");
    if (!fp) {
        printf("文件打开失败\n");
        return -1;
    }

    char ch;

    //读取用户输入, 写入到文件
    while (1) {
        scanf("%c", &ch);
        if (ch == '@') {
            break;
        }
        fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}

int main() {
    //文件路径 字符串
    const char *filePath = "/home/mylady/code/shell_script/logs/val_log.txt";
    test_2(filePath);
    return 1;
}