//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:26

#include <stdio.h>
#include<string.h>

/**
 * 计算字符串有效个数
 */
void test_1() {
    char ch[] = "hello world";

    printf("数组大小：%llu \n", sizeof(ch));
    printf("字符串长度：%llu \n", strlen(ch));
}

void test_2() {
    char ch[] = "hello world";

    int len = 0;
    while (ch[len] != '\0') {
        len ++;
    }

    printf("字符串长度：%d", len);
}

int main() {
    test_1();
    return 1;
}