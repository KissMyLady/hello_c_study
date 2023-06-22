//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:22

#include <stdio.h>

/**
 * 数值溢出 overflow
 */
void test_1() {
    char ch = 127;
    ch = ch + 1;
    printf("%d\n", ch);  // -128

}

int main() {
    test_1();
    return 1;
}