//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 23:46

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void test_1() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int c[] = {7, 8, 9};
    //指针数组是一个特殊的二维数组模型
    //指针数组对应于二级指针
    int *arr[] = {a, b, c};

    //指针数组和二级指针建立关系
    int **p = arr;


    //arr[0][0] a[0]
    //printf("%d\n", **p);
    //二级指针加偏移量 相当于跳过了一个一维数组大小
    //printf("%d\n", **(p + 1));
    //一级指针加偏移量 相当于跳过了一个元素
    //printf("%d\n", *(*p + 1));//arr[0][1]

    //printf("%d\n", *(*(p + 1) + 1));


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //printf("%d ", p[i][j]);
            //printf("%d ", *(p[i] + j));
            //printf("%d ", *(*(p + i) + j));
        }
        puts("");
    }
}

void test_2() {
    int a = 10;
    int b = 20;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;
    //*ppp==pp==&p
    //**ppp==*pp==p==&a;
    //***ppp==**pp==*p==a

    //*pp = &b;//等价于p=&b;
    **pp = 100;
    //*pp = 100;//err
    printf("%d\n", *p);
    printf("%d\n", a);
}

/**
 * 多级指针
 */
int main() {
    test_1();
    return 1;
}