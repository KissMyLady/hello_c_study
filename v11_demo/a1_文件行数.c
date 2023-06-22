//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:42

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int test_1() {
    FILE *fp = fopen("/home/mylady/code/shell_script/logs/lsof_output.txt", "r");

    if (!fp)
        //printf("文件打开失败 \n");
        return -1;

    char *temp = (char *) malloc(sizeof(char) * 1024);

    int i = 0;
    while (!feof(fp)) {
        fgets(temp, 1024, fp);
        i++;
    }
    printf("%d\n", i);
    fclose(fp);

    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}