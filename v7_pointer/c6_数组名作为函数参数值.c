//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:17

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void my_strcat01(char *ch1, char *ch2) {
    //strlen(ch1);
    int i = 0;
    while (ch1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (ch2[j] != '\0') {
        ch1[i + j] = ch2[j];
        j++;
    }
}

void my_strcat02(char *ch1, char *ch2) {
    int i = 0;
    while (*(ch1 + i) != '\0') {
        i++;
    }
    int j = 0;
    while (*(ch2 + j) != '\0') {
        *(ch1 + i + j) = *(ch2 + j);
        j++;
    }
}

void my_strcat03(char *ch1, char *ch2) {
    while (*ch1)ch1++;
    while (*ch2) {
        *ch1 = *ch2;
        ch1++;
        ch2++;
    }
}

void my_strcat(char *ch1, char *ch2) {
    while (*ch1)ch1++;
    while (*ch1++ = *ch2++);
}

void remove_space01(char *ch) {
    char str[100] = {0};
    char *temp = str;
    int i = 0;
    int j = 0;
    while (ch[i] != '\0') {
        if (ch[i] != ' ') {
            str[j] = ch[i];
            j++;
        }
        i++;
    }
    while (*ch++ = *temp++);
}

void remove_space(char *ch) {
    //用来遍历字符串
    char *ftemp = ch;
    //记录非空格字符串
    char *rtemp = ch;
    while (*ftemp) {
        if (*ftemp != ' ') {
            *rtemp = *ftemp;
            rtemp++;
        }
        ftemp++;
    }
    *rtemp = 0;
}

void test_1() {
    char ch1[100] = "hello";
    char ch2[] = "world";

    my_strcat(ch1, ch2);
    printf("执行 my_strcat 返回结果: %s \n", ch1);
}


void test_2() {
    char ch[] = "   h   e    ll  o  w o   r lld    ";

    remove_space(ch);
    printf("%s\n", ch);
}

/**
 * 数组名作为函数参数值
 */
int main() {
    test_2();
    return 1;
}