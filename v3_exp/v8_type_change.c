//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:37

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * 类型转换
 */
void test_1() {
    float p = 3.567;
    int w = 2;
    //隐式转换
    //double sum = p*w;

    //(数据类型) 强制类型转换运算符 不会四舍五入
    int sum = (int) (p * w);

    printf("%d\n", sum);

}

int main() {
    test_1();
    return 1;
}