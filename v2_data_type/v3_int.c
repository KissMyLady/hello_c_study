//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 9:50

#include <stdio.h>


void test_4() {
    //进制
    //二进制0-1 八进制0-7 十六进制0-9 10-15（a-f A-F）

    //int a = 10;
    //printf("%d\n", a);
    ////占位符  %x  输出一个十六进制整型
    //printf("%x\n", a);
    //printf("%X\n", a);
    ////占位符  %o  输出一个吧进制整型
    //printf("%o\n", a);

    //定义八进制数据 以0开头
    int a = 0123;

    //定义十六进制数据 以0x开头
    int b = 0x123;

    //在计算机定义数据时 不可以直接定义二进制
    printf("test_4 输出8进制  %o\n", a);
    printf("test_4 输出10进制 %d\n", a);
    printf("test_4 输出16进制 %x\n", a);

    printf("test_4 输出8进制 %o\n", b);
    printf("test_4 输出10进制 %d\n", b);
    printf("test_4 输出16进制 %x\n", b);
}

/**
 * 有符号数
 */
void test_3() {
    //有符号 signed(可以省略)
    signed int a = -1055426461;

    printf("输出16进制的int类型, 字母以小写输出: %x \n", a);
    printf("输出16进制的int类型, 字母以大写输出: %X \n", a);

}

/**
 * 无符号数
 *      unsigned关键字可以用来明确指定一个无符号整数类型。
 *      无符号整数只包括非负整数，因此它们的范围比有符号整
 *      数大一倍，但不支持负数。
 */
void test_2() {
    //数据类型 标识符 = 值
    //无符号 unsigned 有符号 signed(可以省略)
    //signed int a = -10;

    unsigned int a = -10;
    //%u 占位符 表示输出一个无符号十进制整型数据
    printf("输出一个10进制的无符号数 %u \n", a);
    printf("输出一个有符号的10进制int类型 %d \n", a);
}

void test_1() {
    int a;
    printf("请输入a的值: ");
    //scanf("%d", &a);
    printf("打印a的值 %d \n: ", a);
}

int main() {
    test_2();
    test_3();
    test_4();
    return 1;
}