//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:58

#include <stdio.h>


void test_1() {
    int arr[] = {123456, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //数组名是一个常量 不允许赋值
    //数组名是数组首元素地址
    //arr = 100;//err
    int *p = arr;

    printf("打印p: %p \n", p);
    printf("打印arr: %p\n", arr);
    printf(" \n");
    *p = 123;  //修改arr首地址值为123

    p++;
    printf("打印arr %p \n", arr);
    printf("打印p %p \n", p);
    printf("打印*p %d \n", *p);

    for (int i = 0; i < 10; i++) {
        //*==[]??
        //printf("%d\n", *(arr+i));//arr[0]
        //printf("%d\n", p[i]);
        //printf("%d\n", *(p + i));
        printf("使用指针 p++ 遍历数组: %d\n", *p++);
    }
    //printf("%p\n", arr);
    //printf("%p\n", p);


    //两个指针相减  等到的结果是两个指针的偏移量  （步长）
    //所有的指针类型 相减结果都是int类型
    int step = p - arr;  //3c 40  +1  相当于  sizeof(int)  40/sizeof(int)

    printf("两个指针相减 %d \n", step);
}

void test_2() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //指向数组的指针
    int *p = arr;

    //p是变量  arr是常量
    //p是一个指针 4个字节大小
    //arr是一个数组 40字节大小
    printf("指针类型大小：%d\n", sizeof(p));
    printf("数组大小：%d\n", sizeof(arr));

    //p[i];
    //*(p+i);

}

//数组作为函数参数会退化为指针 丢失数组的精度
void BubbleSort(int *arr, int len) {
    //int len = sizeof(arr) / sizeof(arr[0]);
    //printf("%d\n", sizeof(arr));
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            //if (arr[j] > arr[j + 1]) {
            //	int temp = arr[j];
            //	arr[j] = arr[j + 1];
            //	arr[j + 1] = temp;
            //}
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void test_3() {
    int arr[] = {9, 1, 5, 6, 3, 8, 10, 2, 7, 4};

    BubbleSort(arr, 10);

    for (int i = 0; i < 10; i++) {
        printf("遍历数据arr[i]: %d \n", arr[i]);
    }
}

/**
 * 指针和数组
 */
int main() {
    test_1();
    return 1;
}