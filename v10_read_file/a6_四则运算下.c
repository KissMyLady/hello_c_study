//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:37

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int test_1() {
    FILE *fp1 = fopen("D:/四则运算.txt", "r");
    FILE *fp2 = fopen("D:/四则运算结果.txt", "w");

    if (!fp1 || !fp2) {
        printf("打开文件失败 \n");
        return -1;
    }

    //!feof(fp);  EOF -1
    int a, b, sum;
    char c;
    char *p = (char *) malloc(sizeof(char) * 20);

    for (int i = 0; i < 100; i++) {
        memset(p, 0, 20);
        fgets(p, 20, fp1);

        //6*6=\n
        sscanf(p, "%d%c%d=\n", &a, &c, &b);
        switch (c) {
            case '+':
                sum = a + b;
                break;
            case '-':
                sum = a - b;
                break;
            case '*':
                sum = a * b;
                break;
            case '/':
                sum = a / b;
                break;
        }

        memset(p, 0, 20);
        sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
        fputs(p, fp2);
    }

    free(p);
    fclose(fp1);
    fclose(fp2);

    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}