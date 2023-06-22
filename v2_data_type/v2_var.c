//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 9:35

#include <stdio.h>

// 常量定义
#define MAX 25

//v2_声明和定义区别
void test_1() {

    extern int a1;
    extern int b1;
    extern int c1;

    int bv1;
    int bv2;
    int bv3;

    const int readonly_c1 = 230;

    auto int res_a = readonly_c1 * MAX;

    printf("计算后的结果是 %d \n", res_a);

    int b = 10;
    printf("a: %d \n", b);

}



/**
 * 买菜
 */
void test_2() {

    //黄瓜 3元 /斤  购买5斤
    //常量 在程序运行过程中 其值不能发生改变的量 成为常量
    const int price = 3;//常量  只读变量
    //price = 5;//err
    //变量 在程序运行过程中 其值可以发生改变的量 成为变量
    //int weight = 5;

    int weight;
    printf("请输入购买斤数：\n");

    scanf("%d", &weight);
    int sum = price * weight;
    printf("%d\n", sum);
}


#define PI 3.1415926

/**
 * 圆的面积和周长
 */
void test_3(void) {
    //常量 PI
    //const 数据类型 常量名 = 值
    //const float pi = 3.14159f;

    //Indirection requires pointer operand ('double' invalid)
    //Clang-Tidy: Narrowing conversion from 'double' to 'float' Clang Tidy：缩小从“double”到“float”的转换

    //在定义局部p变量可以在数据类型前加修饰auto  也可以不加
    auto float r = 33.45f;
    auto float s = PI * r * r;
    float l = 2 * PI * r;

    //占位符  %f  表示输出一个浮点型 float  默认保留六位小数  会四舍五入
    printf("圆的面积：%.2f \n", s);
    printf("圆的周长：%.2f \n", l);

    int A = 10;
    int a = 20;
    printf("%d\n", A);
    printf("%d\n", a);

    //标识符：
    //1、不能使用系统关键字
    //2、允许使用字母数字下划线
    //3、不允许数字开头
    //4、标识符区分大小写
    //5、见名知义

}

int main() {
    test_3();
    return 1;
}