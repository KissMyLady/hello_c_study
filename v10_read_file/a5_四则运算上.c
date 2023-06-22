//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:36

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

enum opt {
    add, sub, mlt, dive
};

int test_1() {
    srand((size_t) time(NULL));
    FILE *fp = fopen("D:/四则运算.txt", "w");
    if (!fp)
        return -1;

    int a, b;
    char c;  //+ - * /
    char *p = (char *) malloc(sizeof(char) * 20);


    for (int i = 0; i < 100; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        switch (rand() % 4) {
            case add:
                c = '+';
                break;
            case sub:
                c = '-';
                break;
            case mlt:
                c = '*';
                break;
            case dive:
                c = '/';
                break;
        }
        memset(p, 0, 20);
        sprintf(p, "%d%c%d=\n", a, c, b);
        fputs(p, fp);
    }

    free(p);
    fclose(fp);
    //p = NULL;
    //fp = NULL;

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}