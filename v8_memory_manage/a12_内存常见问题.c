#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1201() {
    //数组下标越界
    //char ch[11] = "hello world";

    char *p = (char *) malloc(sizeof(char) * 11);
    strcpy(p, "hello world");

    printf("%s\n", p);
    free(p);
    return EXIT_SUCCESS;
}

int main1202(void) {
    //野指针
    //int* p = (int*)malloc(0);
    //开辟空间和类型对应
    int *p = (int *) malloc(10);
    //int* p=(int*)malloc(sizeof(int)*10);
    p[0] = 123;
    p[1] = 456;
    p[2] = 789;
    printf("%p\n", p);
    //*p = 100;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    free(p);
    return 0;
}

int main1203(void) {
    int *p = (int *) malloc(sizeof(int) * 10);
    int *temp = p;

    for (int i = 0; i < 10; i++) {
        *p = i;
        //指针叠加 不断改变指针方向 释放会出错
        p++;
    }


    free(p);
    //堆空间不允许多次释放
    p = NULL;
    //空指针允许多次释放
    free(p);

    return 0;
}

void fun08(int *p) {
    p = (int *) malloc(sizeof(int) * 10);
    printf("形参：%p\n", p);
}

void fun09(int **p) {
    *p = (int *) malloc(sizeof(int) * 10);
    printf("形参：%p\n", *p);
}

//返回值
int *fun10() {
    int *p = (int *) malloc(sizeof(int) * 10);
    return p;
}

int main(void) {
    int *p = NULL;
    //值传递
    //fun08(p);
    //地址传递
    //fun09(&p);
    p = fun10();
    printf("实参：%p\n", p);

    for (int i = 0; i < 10; i++)
        p[i] = i;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}
//开辟堆空间存储二维数组  指针数组
//int** p=(int**)malloc(sizeof(int*)*10);
