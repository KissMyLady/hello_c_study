//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:18

#include <stdio.h>


/**
 * 冒泡排序
 */
void test_1() {
    int arr[] = {9, 1, 5, 7, 2, 10, 8, 4, 6, 3};
    //int arr[] = { 1,2,3,4,5,6,7,8,10,9 };
    //外层控制行
    //外层执行元素个数-1次
    for (int i = 0; i < 10 - 1; i++) {
        //内层控制列
        //内层执行元素个数-1-执行次数
        for (int j = 0; j < 10 - 1 - i; j++) {
            //比较两个元素 满足条件交换
            //通过符号控制排序的方式
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    test_1();
    return 1;
}