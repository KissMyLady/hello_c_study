//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:27

//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


char *my_strstr(char *src, char *dest) {
    char *fsrc = src;  //用作于循环遍历的指针
    char *rsrc = src;  //记录每次相同的首地址

    char *tdest = dest;
    while (*fsrc) {
        rsrc = fsrc;
        while (*fsrc == *tdest && *fsrc != '\0') {
            fsrc++;
            tdest++;
        }
        if (*tdest == '\0') {
            return rsrc;
        }
        //回滚
        fsrc = rsrc;
        tdest = dest;
        fsrc++;
    }
    return NULL;
}

void test_1() {
    char *str = "11abcd111122abcd333abcd3322abcd3333322qqq";

    char ch[] = "abcd";
    char *p = my_strstr(str, ch);
    int count = 0;  //记录个数
    while (p) {
        count++;
        p += strlen(ch);
        p = my_strstr(p, ch);
    }

    printf("abcd在字符串中出现:%d次\n", count);
}

void test_2() {
    char *str = "11abcd111122abcd333abcd3322abcd3333322qqq";
    char ch[] = "abcd";
    char *p = my_strstr(str, ch);
    int count = 0;//记录个数
    do {
        if (p) {
            count++;
            p += strlen(ch);
            p = my_strstr(p, ch);
        }
    } while (p);
    printf("%d\n", count);
}

int main() {
    test_1();
    return 1;
}