//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 0:21

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

char *my_strstr(char *src, char *dest) {
    char *fsrc = src;  //用作于循环遍历的指针
    char *rsrc = src;  //记录每次相同的首地址

    char *tdest = dest;
    while (*fsrc) {
        rsrc = fsrc;
        while (*fsrc == *tdest && *fsrc != '\0') {
            fsrc++;
            tdest++;
        }
        if (*tdest == '\0') {
            return rsrc;
        }
        //回滚
        fsrc = rsrc;
        tdest = dest;
        fsrc++;
    }
    return NULL;
}

void test_1() {
    char src[] = "llllhelle worldllo";
    char dest[] = "ll";

    char *p = my_strstr(src, dest);
    printf("查找到的字符串是: %s \n", p);
}

/**
 * 字符串查找字符串
 */
int main() {
    test_1();
    return 1;
}