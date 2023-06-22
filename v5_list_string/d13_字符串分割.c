#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1301() {

    //字符串截取 strtok 会破坏源字符串  用\0替换分割的标志位
    char ch[] = "www.itcast.cn";//123456@qq.com
    //www\0itcast.cn
    //www\0itcast\0cn

    char *p = strtok(ch, ".");
    printf("%s \n", p);

    p = strtok(NULL, ".");
    printf("%s \n", p);

    p = strtok(NULL, ".");
    printf("%s \n", p);
    //printf("%s\n", ch);


    //printf("%p\n", p);
    //printf("%p\n", ch);
    return EXIT_SUCCESS;
}

int test_1() {
    char ch[] = "123456@qq.com";
    char str[100] = {0};

    //字符串备份
    strcpy(str, ch);

    char *p = strtok(str, "@");
    printf("%s\n", p);
    p = strtok(NULL, ".");
    printf("%s\n", p);
    return 0;

}

int test_2() {
    //char ch[] = "nichousha\nchounizadi\nzaichouyigeshishi\nduibuqidagewocuole\nguawazi";

    char ch[] = "你瞅啥\n瞅你咋啦\n再瞅一个试试\n对不起大哥我错喽\n瓜娃子";

    char *p = strtok(ch, "\n");

    while (p) {
        printf("%s\n", p);
        p = strtok(NULL, "\n");
    }
    return 0;
}

int main() {
    test_1();
    return 1;
}