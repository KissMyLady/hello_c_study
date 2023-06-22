//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 22:19

#include <stdio.h>

void test_1() {
    int a = 10;
    //int* p = &a;
    //万能指针可以接收任意类型变量的内存地址
    void * p = &a;

    //在通过万能指针修改变量的值时  需要找到变量对应的指针类型
    *(int *) p = 100;

    printf("a打印 %d \n", a);
    printf("(int *) p打印 %d \n", *(int *) p);
    //printf("%p\n", p);

    printf("万能指针在内存占的字节大小：%lu \n", sizeof(void *));
    //printf("void在内存占的字节大小：%d\n", sizeof(void));
}

/**
 * 万能指针 universal
 */
int main() {
    test_1();
    return 1;
}