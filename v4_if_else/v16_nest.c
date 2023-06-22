//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:00
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>


/**
 * 嵌套循环
 */
void test_1() {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 60; j++) {
            for (int k = 0; k < 60; k++) {
                //清屏
                system("cls");
                printf("打印 %02d:%02d:%02d\n", i, j, k);
                Sleep(960);
            }
        }
    }
}

//九九乘法口诀
/*
1*1=1
1*2=2 2*2=4
1*3=3 2*3=6 3*3=9
*/
void test_2() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
}

int main() {
    test_2();
    return 1;
}