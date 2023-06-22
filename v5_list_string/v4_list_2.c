//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:19

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * 二维数组
 */
void test_1() {
    //数据类型 数组名[元素个数]={值1，值2};
    //数据类型 数组名[行][列]=
    //{
    //{值1，值2},
    //{值3，值4}
    //}
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    //{
    //	{1,2,3},
    //	{4,5,6}
    //};

    //arr[1][2] = 20;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("二维数组大小：%d\n", sizeof(arr));//行*列*sizeof(数据类型)
    printf("二维数组一行大小：%d\n", sizeof(arr[0]));
    printf("二维数组元素大小：%d\n", sizeof(arr[0][0]));

    printf("二维数组行数：%d\n", sizeof(arr) / sizeof(arr[0]));
    printf("二维数组列数：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
}

/**
 * 二维数组首地址
 */
void test_2() {
    int arr[2][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%p\n", &arr[i][j]);
        }

    }
    //二维数组首地址
    //printf("%p\n", arr);
    ////arr[0] = 100;//err
    //printf("%p\n", arr[0]);
    //printf("%p\n", &arr[0][0]);
    //printf("%p\n", &arr[0][1]);

    //printf("%p\n", arr[1]);
}

/**
 * 二维数组初始化
 */
void test_3() {
    //二维数组初始化
    //int arr[2][3] = { { 1,2,3 },{ 4,5,6 } };
    //int arr[2][3] = { 1,2,3,4,5,6 };
    //int arr[][3] = { 1,2,3,4,5,6,7 };
    int arr[][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


int main() {
    test_1();
    return 1;
}