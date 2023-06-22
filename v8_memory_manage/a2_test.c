#include<stdio.h>

//声明
//extern int a;
int a;
//定义全局变量

//int a = 110;
void fun03() {
    a = 1000;
    printf("%d\n", a);
}

//void BubbleSort(int a, int b, int c)
//{
//
//}
void BubbleSort(int *src, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (src[j] > src[j + 1]) {
                int temp = src[j];
                src[j] = src[j + 1];
                src[j + 1] = temp;
            }
        }
    }
}
