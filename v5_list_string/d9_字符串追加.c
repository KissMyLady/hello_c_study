#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void my_strcat(char *dest, const char *src) {
    //找到dest字符串中\0位置
    while (*dest)dest++;
    while (*dest++ = *src++);
}

void my_strncat(char *dest, char *src, size_t n) {
    while (*dest)dest++;
    while ((*dest++ = *src++) && --n);
}

int test_1() {
    char dest[100] = "hello";
    char src[] = "world";

    //字符串追加
    //strcat(dest, src);
    //字符串有限追加
    //strncat(dest, src, 30);
    //my_strcat(dest, src);
    my_strncat(dest, src, 3);
    printf("%s\n", dest);

    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}