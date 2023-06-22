//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:16

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//指针作为函数参数
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test_1() {
    int a = 10;
    int b = 20;
    //值传递  形参不影响实参的值
    //swap(a, b);

    //地址传递  形参可以改变实参的值
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}

/**
 * 指针作为函数参数
 */
int main() {
    test_1();
    return 1;
}