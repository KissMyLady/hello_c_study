//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:04
// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


/**
 * 跳转语句
 */
void test_1() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }

        for (int j = 0; j < 10; j++) {
            printf("%d %d\n", i, j);
        }
    }
}

void test_2() {
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 1) {
            continue;
        }
        printf("%d\n", i);
    }
}

int test_3() {
    printf("hello world1\n");
    printf("hello world2\n");
    goto FLAG1;

    printf("hello world3\n");
    printf("hello world4\n");
    return 0;

    FLAG1:
    printf("hello world5\n");
    printf("hello world6\n");
    return 1;
}

void test_4() {
    int i = 0, j = 0;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            goto FLAG;
        }
        printf("i=%d\n", i);
    }

    for (j = 0; j < 10; j++) {
        FLAG:
        printf("j=%d\n", j);
    }
}

//无限循环
void test_5() {
    FLAG:
    printf("hello world\n");
    goto FLAG;
}

int main() {
    test_5();
    return 1;
}