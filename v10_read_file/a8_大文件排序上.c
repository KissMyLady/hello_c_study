//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:38

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void test_1() {
    srand((size_t) time(NULL));
    FILE *fp = fopen("D:/数据.txt", "w");

    if (!fp)
        return -1;

    for (int i = 0; i < 1000; i++) {
        fprintf(fp, "%d \n", rand() % 256);
    }
    fclose(fp);
}

int main() {
    test_1();
    return 1;
}