//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 18:58

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * 字符型
 */
int test_1() {
    //字符型变量
    //char ch = '0';
    char ch = 'a';

    //打印字符变量
    printf("打印字符变量 %c \n", ch);

    //打印字母a对应十进制数
    printf("打印字母a对应十进制数 ASCII %d \n", ch);

    //unsigned int len = szieof(ch);
    printf("字符型大小：%lu \n", sizeof(ch));

    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}