//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:34

#include <stdio.h>

/**
 * 赋值运算符 assignment
 */
void test_1() {
    int a = 10;
    int b = 5;
    //a = a + 5;
    //a *= 5;  //a=a%5;
    a *= --b;  //a= a * --b;

    printf("%d\n", a);
}

int main() {
    test_1();
    return 1;
}