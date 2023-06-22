#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//函数可以调用自己  成为递归函数  
void BubbleSort(int *, int);

int main0601() {

    int arr[] = {9, 1, 5, 6, 8, 2, 7, 10, 4, 3};
    //全局函数的名称是作用域中唯一的
    //作用域：在整个项目中所有文件中使用
    //声明周期：从程序创建到程序销毁
    BubbleSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return EXIT_SUCCESS;
}

void fun07();

//静态函数
//静态函数可以和全局函数重名
//作用域：当前文件中
//声明周期：从程序创建到程序销毁
static void fun07() {
    //fun07();
    printf("hello world1\n");
}

int main0602(void) {
    fun07();
}