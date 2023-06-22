//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:07

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * 数组的定义和使用
 */
void test_1() {
    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
    //int arr[10] = { 1,2,3,4,5 };
    //int arr[10] = { 0 };
    //int arr[10] = { 1 };
    int arr[10];
    arr[0] = 1;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d\n", arr[i]);
    }
}

#define SIZE 10

void test_2() {
    //int i = 10;
    //数组元素必须是常量 常量表达式
    //数组必须预先知道大小 动态数组-》开辟堆空间
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("遍历数组&arr[i]: %d", &arr[i]);
    }
    for (int i = 0; i < SIZE; i++) {
        printf("遍历数组 arr[i]: %d\n", arr[i]);
    }
}

/**
 * 10只小猪称体重
 */
void test_3() {
    int arr[SIZE];

    //用户输入10次, 真是要疯掉了 !
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("最重的小猪体重为：%d \n", max);
}


int main() {
    test_3();
    return 1;
}