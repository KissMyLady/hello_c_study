//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:39

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int test_1() {
    FILE *fp = fopen("D:/c.txt", "wb");
    if (!fp)
        return -1;

    //int a = 5678;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fwrite(arr, sizeof(int), 10, fp);

    fclose(fp);

    return EXIT_SUCCESS;
}

int test_2(void) {
    FILE *fp = fopen("D:/c.txt", "rb");
    if (!fp)
        return -1;

    //int value;
    //fread(&value, sizeof(int), 1, fp);
    int arr[10] = {0};

    fread(arr, sizeof(int), 10, fp);

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    fclose(fp);
    return 0;
}

int main() {
    test_1();
    return 1;
}