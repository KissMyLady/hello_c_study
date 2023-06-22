#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void inverse01(char *ch) {
    int i = 0;
    int j = strlen(ch) - 1;

    while (i < j) {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;

        i++;
        j--;
    }
    return;
}

void inverse(char *ch) {
    char *ftemp = ch;
    char *btemp = ch + strlen(ch) - 1;
    //printf("%c\n", *btemp);
    while (ftemp < btemp) {
        char temp = *ftemp;
        *ftemp = *btemp;
        *btemp = temp;
        ftemp++;
        btemp--;
    }
    return;
}


//回文字符串
//abcba abccba  abcbdcba
int symm(char *ch) {
    char *ftemp = ch;
    char *btemp = ch + strlen(ch) - 1;

    while (ftemp < btemp) {
        if (*ftemp != *btemp)
            return 1;
        ftemp++;
        btemp--;
    }
    return 0;
}

int test_1() {
    char ch[] = "hello world";
    inverse(ch);
    printf("%s\n", ch);
    return EXIT_SUCCESS;
}

int test_2(void) {
    char ch[] = "abcbdcba";

    int value = symm(ch);

    if (!value) {
        printf("相同 \n");
    } else {
        printf("不相同 \n");
    }

    return 0;
}

int main() {
    test_1();
    return 1;
}