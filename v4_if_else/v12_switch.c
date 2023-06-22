//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 13:43

#include <stdio.h>

void test_1() {
    int score;
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
            printf("优秀\n");
            break;
        case 9:
            printf("优秀\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 7:
            printf("及格\n");
            break;
        case 6:
            printf("及格\n");
            break;
        default:
            printf("不及格\n");
            break;
    }
}

int main() {
    test_1();
    return 1;
}