//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:18

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum Color {
    red = 10, blue, green, pink,
    yellow = 20, black, white
};

int test_1() {
    int value;

    scanf("%d", &value);

    switch (value) {
        case red:
            printf("红色\n");
            break;
        case blue:
            printf("蓝色\n");

            break;
        case green:
            printf("绿色\n");
            break;
        case pink:
            printf("粉色\n");
            break;
        case yellow:
            printf("黄色\n");
            break;
        case black:
            printf("黑色\n");
            break;
        case white:
            printf("白色\n");
            break;
        default:
            break;
    }

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}