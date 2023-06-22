//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:44
#include <stdio.h>
#include<math.h>


/**
 * do-while 语句
 */
void test_1() {
    int i = 0;
    do {
        printf("%d \n", i);
        i++;
    } while (i < 10);

    //while (i<10)
    //{
    //	printf("%d\n", i);
    //	i++;
    //}
}

//水仙花  从100-999 各个位数的立方和相加等于这个数本身就是一个水仙花数

void test_2() {
    int i = 1;
    do {
        int a_1 = i % 10;       //个位数
        int b_10 = i / 10 % 10;  //十位数
        int c_100 = i / 100;      //百位数

        //条件判断
        if (pow(a_1, 3) + pow(b_10, 3) + pow(c_100, 3) == i) {
            printf("水仙花数是是: %d \n", i);
        }
        i++;
    } while (i <= 99999998);
}

int main() {
    test_2();
    return 1;
}