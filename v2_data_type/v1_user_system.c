#include <stdio.h>
#include <stdlib.h>  //std lib 系统依赖库

// int system(const char *command);


/**
 * 打开计算器
 */
void test_1() {
    //cmd命令 calc 计算器 notepad 记事本 mspaint 画图板
    //system("calc");
    //system可以打开一个外部的应用程序  如果带路径 需要使用\\  或者/
    int value;
    //value = system("D:/Desktop/FeiQ.exe");
    value = system("calc");
    //%d是一个占位符，表示输出一个整型数据
    printf("%d\n", value);
}

/**
 * 目录打印
 */
void test_2() {
    printf("Hello world ! \n");

    //执行系统命令
    int resInt = 10;
    //resInt = system("ls -al");
    resInt = system("dir");
    printf("😁😁😁魔法师狄奥伦娜 执行系统命令 返回值: %d \n", resInt);
}

//主函数 📌📌魔法师狄奥伦娜
int main() {
    test_1();
    return 1;
}