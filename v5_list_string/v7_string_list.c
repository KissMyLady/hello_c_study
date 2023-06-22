//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:22

#include <stdio.h>


/**
 * 字符串数组
 */
void test_1() {
    //定义字符数组
    char arr[100] = {110, 111, 112, 101, 123, 98, 99};

    //char arr[] = { "hello"};
    printf("打印arr: %s \n", arr);

    //char arr[6] = {'h','e','l','l','o'};
    //字符
    //char ch = 'a';

    //字符串 字符串结束标志为\0  数字0等同于\0  但是不等同于'0'
    //char * arr = "hello";
    //char arr[] = "hello";
    char arr2[] = { 'h','e','l','l','o','\0' , 'a', 'b' };

    printf("打印arr2 %s", arr2);
    //printf("%d\n", sizeof(arr));//sizeof(数据类型)

    //for (int i = 0; i < sizeof(arr); i++)
    //{
    //	printf("%c", arr[i]);
    //}
}


void test_2() {
    //定义字符数组存储字符串
    char ch[11];

    scanf("%10s", ch);

    printf("%s", ch);
}

/**
 * 字符串拼接
 */
void test_3() {

    char ch1[] = "hello";
    char ch2[] = "world";
    char ch3[20];

    int i = 0;
    int j = 0;
    while (ch1[i] != '\0') {
        ch3[i] = ch1[i];
        i++;
    }
    while (ch2[j] != '\0') {
        ch3[i + j] = ch2[j];
        j++;
    }

    ch3[i + j] = '\0';

    printf("%s", ch3);
}

int main() {
    test_1();
    return 1;
}