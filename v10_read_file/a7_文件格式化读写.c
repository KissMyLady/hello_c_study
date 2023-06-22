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
    FILE *fp = fopen("D:/a.txt", "r");
    if (!fp)
        return -1;
    char *p = (char *) malloc(sizeof(char) * 100);

    int a;
    fscanf(fp, "%3d", &a);
    printf("%d\n", a);
    fscanf(fp, "%s", p);
    printf("%s", p);

    fscanf(fp, "%s", p);
    printf("%s", p);

    fscanf(fp, "%s", p);
    printf("%s", p);

    fscanf(fp, "%s", p);
    printf("%s", p);
    fscanf(fp, "%s", p);
    printf("%s", p);

    free(p);
    fclose(fp);

    return EXIT_SUCCESS;
}

int test_2(void) {
    FILE *fp = fopen("D:/b.txt", "r");
    if (!fp)
        return -1;

    //int a, b, c;

    //fscanf(fp, "%d+%d=%d", &a, &b, &c);

    //char ch[20] = {0};
    //memset(ch, 0, 20);
    //fscanf(fp, "%[^\n]", ch);
    //fscanf(fp, "%11c", ch);
    //fscanf(fp, "%3c", ch);
    //fscanf(fp, "%3s", ch);
    //printf("%s\n", ch);
    //printf("%d\n", a);
    //printf("%d\n", b);
    //printf("%d\n", c);

    int a;
    fscanf(fp, "%x", &a);
    printf("%d\n", a);
    fclose(fp);
    return 0;
}

int test_3(void) {
    FILE *fp = fopen("d:/b.txt", "w");
    if (!fp)
        return -1;

    //char ch[] = "hello world";
    //fprintf(fp, "%s", ch);
    int a = 10;
    fprintf(fp, "%05x", a);
    fclose(fp);
    return EXIT_SUCCESS;
}

int test_4(void) {
    srand((size_t) time(NULL));
    FILE *fp = fopen("D:/四则运算.txt", "w");
    if (!fp)
        return -1;
    int a, b;
    char c;

    for (int i = 0; i < 100; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        switch (rand() % 4) {
            case 0:
                c = '+';
                break;
            case 1:
                c = '-';
                break;
            case 2:
                c = '*';
                break;
            case 3:
                c = '/';
                break;
        }

        fprintf(fp, "%d%c%d=\n", a, c, b);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}

int test_5(void) {
    FILE *fp1 = fopen("D:/四则运算.txt", "r");
    FILE *fp2 = fopen("D:/四则运算结果.txt", "w");
    if (!fp1 || !fp2) {
        printf("打开文件失败\n");
        return -1;
    }
    int a, b, sum;
    char c;
    for (int i = 0; i < 100; i++) {
        fscanf(fp1, "%d%c%d=\n", &a, &c, &b);

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
        fprintf(fp2, "%d%c%d=%d\n", a, c, b, sum);
    }
    fclose(fp1);
    fclose(fp2);
    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}