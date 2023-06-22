//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:23

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void test_1() {
    //char ch[] = "hello world";
    //char* p = ch;
    //printf("%s\n", p);
    //printf("%c\n", *(p+1));

    char ch[] = "hello world"; // 栈区字符串
    char *p = "hello world";   // 数据区常量区字符串
    char *p1 = "hello world";
    //printf("%p\n", p);
    //printf("%p\n", p1);
    //ch[2] = 'm';
    //p[2] = 'm';//err
    //*(p + 2) = 'm';//err
    printf("%c \n", p[2]);
    printf("%s \n", ch);
    printf("%s \n", p);
}

void test_2() {
    //字符串数组
    //指针数组
    //char ch1[] = "hello";
    //char ch2[] = "world";
    //char ch3[] = "dabaobei";
    //char* arr[] = { ch1, ch2, ch3 };

    //字符串数组  指针数组
    char *arr[] = {"hello", "world", "dabaobei"};

    //char** p = arr;//ok
    //arr[0]  arr[1]  arr[2]
    //for (int i = 0; i < 3; i++) {
    //	printf("%s\n", arr[i]);
    //}

    //字符串排序
    for (int i = 0; i < 3 - 1; i++) {
        for (int j = 0; j < 3 - 1 - i; j++) {
            //找首字符进行比较
            if (arr[j][0] > arr[j + 1][0]) {
                //交换指针数组元素进行排序

                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    test_1();
    return 1;
}