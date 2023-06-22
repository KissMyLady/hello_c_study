//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:43

#include <stdio.h>

/**
 * while语句
 */
void test_1() {
    //while (表达式)

    int i = 0;
    //死循环
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
}


void test_2() {
    int i = 1;
    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}

void test_3() {
    int i = 1;
    while (i < 100) {
        //7的倍数 || 个位带7 || 十位带7
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            printf("敲桌子\n");
        } else {
            printf("%d\n", i);
        }
        i++;
    }
}

int main() {
    test_3();
    return 1;
}