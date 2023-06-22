//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:29

#include <stdio.h>

/**
 * scanf 函数
 */
void test_1() {
    //char ch;
    int a, b;

    //scanf("%c", &ch);
    scanf("%3d%d", &a, &b);

    //putchar(ch);
    printf("%d\t%d", a, b);
}

void test_2() {
    char ch;
    //接收键盘获取字符
    ch = getchar();
    putchar(ch);
    //暂时停留界面
    getchar();
}

void test_3() {
    int a;
    scanf("%d \n", &a);
    printf("%d \n", a);
}


int main() {
    test_3();
    return 1;
}