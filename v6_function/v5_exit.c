//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 12:22

#include <stdio.h>
#include <stdlib.h>



/**
 * main函数与 exit函数
 * 调用exit, 程序终止
 * */
void test_1() {

    printf("子方法在执行 >>> \n");

    //exit(0);
    return;

}

int main() {
    test_1();

    printf("main还在运行 ....\n");

    while (1);

    return 1;
}