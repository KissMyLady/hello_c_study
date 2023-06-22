//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:25

#include <stdio.h>

/**
 * 字符串输出
 */
void test_1() {
    char ch[100];

    //通过键盘获取一个字符串
    //gets接收字符串可以带空格
    gets(ch);
    //通过正则表达式  获取带空格字符串
    //scanf("%[^\n]", ch);

    printf("%s\n", ch);

}

void test_2() {
    char ch[10];
    //"hello\n\0"
    //fgets可以接收空格
    //fgets获取字符串少于元素个数会有\n  大于等于 没有\n
    fgets(ch, sizeof(ch), stdin);

    printf("%s", ch);
}

void test_3() {
    char ch[] = "hello world";
    //puts自带换行
    //puts(ch);
    //puts("hello\0 world");
    //puts("");换行
}

void test_4() {
    char ch[] = "hello world";
    //fputs(ch, stdout);
    //printf("%s", ch);
}

int main() {
    test_1();
    return 1;
}