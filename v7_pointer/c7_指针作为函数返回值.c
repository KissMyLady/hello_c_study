//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char *my_strchr01(char *str, char ch) {
    int i = 0;
    while (str[i]) {
        if (str[i] == ch) {
            return &str[i];
        }
        i++;
    }

    return NULL;
}

char *my_strchr(char *str, char ch) {
    while (*str) {
        if (*str == ch)
            return str;
        str++;
    }
    return NULL;
}

void test_1() {
    char str[] = "hell worldll";
    char *p = my_strchr(str, 'o');

    if (p == NULL) {
        printf("未找到 \n");
    } else {
        printf("打印p: %s \n", p);
    }
}

/**
 * 指针作为函数返回值
 */
int main() {
    test_1();
    return 1;
}