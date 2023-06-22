//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:21

#include <stdio.h>


/**
 * 学生考试
 */
void test_1() {
//定义一个数组  存储五名学生三门成绩  arr[5][3]
    //求出每名学生的总成绩 平均成绩
    //求出每门学科的总成绩 平均成绩
    int arr[5][3];

    //获取学生成绩
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    //打印学生成绩
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
            //printf("%d ", arr[i][j]);
        }
        printf("第%d名学生的总成绩为：%d\t平均成绩为：%d\n", i + 1, sum, sum / 3);
        //printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            //求出一列的值
            sum += arr[j][i];
        }
        printf("第%d门功课的总成绩为：%d\t平均成绩：%d\n", i + 1, sum, sum / 5);
    }
}

int main() {
    test_1();
    return 1;
}