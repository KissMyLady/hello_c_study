//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 19:02

#include <stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

/**
 * 浮点型
 */
int test_1() {
	float a = 3.14f;
	double b = 3.14f;
	printf("%.2f \n", a);
	printf("%lf \n", b);

	//sizeof字节大小
	//浮点型数据 存储在内存中的格式分为符号位 指数位 小数位
	printf("%d \n", sizeof(float));
	printf("%d \n", sizeof(double));
	return EXIT_SUCCESS;
}

int main0702(void)
{
    int a = 10;
    float b = 3.14;
    //占位符  表示输出一个变量对应的内存地址编号（无符号十六进制整型数）
    printf("%p\n", &a);
    printf("%p\n", &b);
    //大小端对齐
    getchar();
    return 0;
}

int main0703(void)
{
    //float a = 0.123456;
    //printf("%e\n", a);
    //float b = 3.2e3f;
    //printf("%f\n", b);


    char ch = -10;
    printf("%p\n", &ch);
    system("pause");
    //printf("%d\n", ch);
    //printf("%c\n", ch);
    return 0;
}


int main() {
    test_1();
    return 1;
}