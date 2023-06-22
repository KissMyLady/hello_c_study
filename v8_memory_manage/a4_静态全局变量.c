#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//静态全局变量  
//作用域：可以在本文件中使用 不可以在其他文件中使用
//生命周期：从程序创建到程序销毁
static int c = 10;

void fun05() {
    c = 20;
    printf("%d\n", c);

}

int main04() {

    printf("%d\n", c);
    fun05();
    //fun06();
    return EXIT_SUCCESS;
}
