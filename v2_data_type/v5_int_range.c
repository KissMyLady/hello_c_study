//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 18:43

#include <stdio.h>

/**
 * 整型大小和范围
 */
void test_1() {

    int a = 10;         // 整型
    short b = 20;       // 短整型
    long c = 30l;       // 长整型
    long long d = 40ll; // 长长整型

    //short<=int<=long< longlong

    printf("%d \n", a);
    //占位符 表示输出一个短整型数据
    printf("%hd \n", b);
    //占位符 表示输出一个长整型数据
    printf("%ld \n", c);
    //占位符 表示输出一个长长整型数据
    printf("%lld \n", d);


    //sizeof 计算数据类型在内存中占的字节（BYTE）大小
    //1B=8bit
    //sizeof(数据类型) sizeof(变量名) sizeof 变量名
    unsigned int len = sizeof(short);
    printf("len: %d \n", len);


    //printf("%d\n", len);
    printf("整型：%lu \n", sizeof(a));     // 4 = 32bit
    printf("短整型：%lu \n", sizeof(b));   // 2
    printf("长整型：%lu \n", sizeof(c));   // 4
    printf("长长整型：%lu \n", sizeof(d)); // 8
}

int main() {
    test_1();
    return 1;
}