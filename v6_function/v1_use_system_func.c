//coding:utf-8
//Author:mylady
//Datetime:2023/6/21 12:16

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


//调用函数
void test_1() {
    time_t tm = time(NULL);  //得到系统时间
    srand((unsigned int) tm);  //随机种子只需要设置一次即可

    int r = rand();

    printf("r = %d \n", r);
    printf("tm= %d \n", tm);

}

int main() {
    test_1();
    return 1;
}