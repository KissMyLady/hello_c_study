//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 17:51

#include <stdio.h>

/**
 * 整形输入
 */
void test_1() {
    int a;

    //通过键盘输入赋值
    //&运算符 表示取地址运算符
    scanf("%d", &a);

    printf("打印输入对象a %d \n", a);
}

int main() {
    test_1();
    return 1;
}