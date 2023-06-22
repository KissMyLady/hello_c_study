//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 23:11

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void my_strcpy01(char *dest, char *ch) {
    int i = 0;
    //while (ch[i] != '\0');
    //while (ch[i] != 0);
    while (ch[i]) {
        dest[i] = ch[i];
        i++;
    }
    dest[i] = 0;
}

void my_strcpy02(char *dest, char *ch) {
    int i = 0;
    while (*(ch + i)) {
        *(dest + i) = *(ch + i);
        i++;
    }
    *(dest + i) = 0;
}

void my_strcpy03(char *dest, char *ch) {
    while (*ch) {
        *dest = *ch;
        dest++;//指针+1  相当于指向数组下一个元素  内存地址变化了sizeof(char)
        ch++;
    }
    *dest = 0;
}

void my_strcpy(char *dest, char *ch) {
    while (*dest++ = *ch++);
}


void test_1() {
    //字符串拷贝
    char ch[] = "hello world";
    char dest[0];

    my_strcpy(dest, ch);
    printf("%s \n", dest);
}

void test_2() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //char *p1;

    int *p = &arr[3];
    printf("打印指针指向的值: %d \n", *p);
    //arr[-1]  //数组下标越界

    //printf("%p\n", p);
    //p--;//指针的加减运算和指针的类型有关
    //p--;
    //p--;
    //内存地址相差是12 / sizeof(int)  = 偏移量
    //int step = p - arr;

    //printf("%d\n", step);

    //指针操作数组时下标允许是负数
    printf("打印p[-2]: %d \n", p[-2]);  //*(p-2);
    //printf("%p\n", p);
    //printf("%p\n", arr);
}

void test_3() {
    //指针和运算符的操作
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &arr[7];

    printf("打印指针p: %d \n", *p);
    printf("指针p的内存地址打印: %p \n", p);

    //野指针
    //p = p + arr; //err
    //p = p*arr;   //err
    //p = p*4;     //err
    //p = p        //arr;
    //int len = p % 4;

    //if (p > arr) {
    //	printf("真\n");
    //}

    //if (p || arr) {

    //}
}

/**
 * 指针运算
 */
int main() {
    test_3();
    return 1;
}