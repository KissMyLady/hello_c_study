//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:38

#include <stdio.h>

/**
 * 3只小猪称体重
 */
void test_1() {
    int a, b, c;
    printf("请输入三只小猪体重:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        //a大于b
        if (a > c) {
            //a大于c
            printf("小猪a最重\n");
        } else {
            printf("小猪c最重\n");
        }
    } else {
        if (b > c) {
            printf("小猪b最重\n");
        } else {
            printf("小猪c最重\n");
        }
    }
}

int main() {
    test_1();
    return 1;
}