//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:51

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include<string.h>


//无参函数
int fun01() {
    return rand() % 10;
}

//冒泡排序函数版  有参函数
void BubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return;
}

void fun02() {
    printf("hello world\n");
    return;;
}

void test_1() {
    srand((unsigned int) time(NULL));
    fun01();
}

void test_2() {
    int arr[] = {9, 1, 7, 4, 2, 10, 3, 8, 6, 5};
    BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    //void  空类型
    int a = 10;
    float b = 20.f;
    //void类型 不可以直接定义数据
    //void类型可以作为函数的返回值类型 表示没有返回值
    //void c = 30;
}

//无参无返函数
void main0403(void) {
    printf("你瞅啥，程序就这样\n");
    return;
}

int main() {
    test_1();
    return 1;
}