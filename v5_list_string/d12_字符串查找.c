#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

char *my_strchr(const char *s, int c) {
    while (*s) {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

int test_1() {
    char ch[] = "hello world";
    char c = 'l';
    //char* p = strchr(ch, c);
    char *p = my_strchr(ch, c);
    printf("%s\n", p);

    return EXIT_SUCCESS;
}

int test_2(void) {
    char ch[] = "hello world";
    char str[] = "llo";
    char *p = strstr(ch, str);
    printf("%s\n", p);
    return 0;
}

int main() {
    test_1();
    return 1;
}