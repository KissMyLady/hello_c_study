//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:37

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void test_1() {
    int score = 568;
    // scanf("%d", &score);
    //如果表达式结果为真  执行{}对应的代码
    //if(表达式)
    //if(表达式){} else{}
    //if(表达式1){}else if(表达式2) esle{}

    //条件嵌套
    if (score > 700) {
        printf("我要上清华\n");
        if (score > 720) {
            printf("我要学习计算机 \n");
        } else if (score > 710) {
            printf("我要学习挖掘机 \n");
        } else {
            printf("我要学习盗墓 \n");
        }
    } else if (score > 680) {
        printf("我要上北大 \n");
    } else {
        printf("我要上传智 \n");
    }
}

int main() {
    test_1();
    return 1;
}