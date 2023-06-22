#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define MAX 10


void BubbleSort(int *src, int len);

int main10() {
    srand((size_t) time(NULL));

    int *p = (int *) malloc(sizeof(int) * MAX);

    printf("%p\n", p);
    for (int i = 0; i < MAX; i++) {
        p[i] = rand() % 100;
        printf("%d ", p[i]);
    }
    printf("\n");
    BubbleSort(p, MAX);

    for (int i = 0; i < MAX; i++) {
        //printf("%d\n", p[i]);
        printf("%d\n", *p);
        p++;
    }
    printf("%p\n", p);

    p -= 10;
    printf("%p\n", p);

    free(p);
    return EXIT_SUCCESS;
}
