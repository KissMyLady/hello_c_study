//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:25

#include <stdio.h>

/**
 * 附加格式
 */
void test_1() {
    int a1 = 12;
    float a2 = 3.14f;

    printf("===%5d=== \n", a1);

    printf("===%-7.2f=== \n", a1);
    printf("===%-7.2f=== \n", a2);
}


void test_2() {
    char ch = 'a';

    printf("%c\n", ch);
    //输出字符  可以是变量 字符 数字 转义字符
    putchar(ch);
    printf("--- \n");

    putchar('B');
    printf("--- \n");

    putchar(97);
    printf("--- \n");

    putchar('\n');
    printf("--- \n");
}

int main() {
    test_2();
    return 1;
}