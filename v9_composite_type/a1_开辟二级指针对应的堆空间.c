//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:41

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int test_1() {
    //int arr[5][3]
    //开辟二级指针对应的堆空间
    int **p = (int **) malloc(sizeof(int *) * 5);

    for (int i = 0; i < 5; i++) {
        //开辟一级指针对应的堆空间
        p[i] = (int *) malloc(sizeof(int) * 3);
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);
            //printf("%d ", *(p[i] + j));
            //printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++) {
        free(p[i]);
    }
    free(p);

    return EXIT_SUCCESS;
}


int main() {
    test_1();
    return 1;
}