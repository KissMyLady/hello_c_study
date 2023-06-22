//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:07

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void test_1() {
    //变量定义
    //数据类型 变量  = 值
    //数组定义
    //数据类型 数组名[元素个数]={值1，值2，值3}
    int arr[10] = {9, 4, 2, 1, 8, 5, 3, 6, 10, 7};

    //数组下标  数组名[下标]
    //数组下标是从0开始的到数组元素个数-1
    //printf("%d\n", arr[0]);

    for (int i = 0; i < 10; i++) {
        printf("数组遍历 arr[i]: %d \n", arr[i]);
    }

}

void test_2() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //数组元素参与计算
    arr[3] = arr[5];
    arr[2] = arr[3] * 2;

    for (int i = 0; i < 10; i++) {
        printf("数组遍历 arr[i]: %d \n", arr[i]);
    }
}

void test_3() {
    //数组在内存中存储方式和大小
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //下标为0的元素地址
    //printf("%p\n", &arr[0]);
    //printf("%p\n", &arr[1]);
    //printf("%p\n", &arr[2]);
    //printf("%p\n", &arr[3]);
    //printf("%p\n", &arr[4]);
    //数组名是一个地址常量  指向数组首地址的常量

    //printf("%p\n", arr);


    printf("数组在内存中占的大小：%d \n", sizeof(arr));
    printf("数组元素大小：%d \n", sizeof(arr[0]));
    printf("数组元素个数：%d \n", sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    test_3();
    return 1;
}