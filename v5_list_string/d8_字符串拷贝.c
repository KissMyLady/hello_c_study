#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void my_strcpy(char *dest, const char *src) {
    while (*dest++ = *src++);
}

void my_strncpy04(char *dest, const char *src, size_t n) {
    while ((*dest++ = *src++) && --n);
}

void my_strncpy01(char *dest, const char *src, size_t n) {
    int i = 0;
    for (int i = 0; i < n && src[i]; i++) {
        dest[i] = src[i];
    }
}

void my_strncpy02(char *dest, const char *src, size_t n) {
    int i = 0;
    while (i < n && src[i]) {
        *(dest + i) = *(src + i);
        i++;
    }

}


void my_strncpy(char *dest, const char *src, size_t n) {
    while (n-- && *src) {
        *dest = *src;
        dest++;
        src++;
    }
}

int test_1() {
    char ch[] = "hello world";

    char str[100] = {0};

    //my_strcpy(str, ch);
    //字符串拷贝
    //strcpy(str, ch);
    //字符串有限拷贝
    //strncpy(str, ch, 50);

    my_strncpy(str, ch, 5);
    printf("%s\n", str);

    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}