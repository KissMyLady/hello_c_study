#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1101() {
    char ch[100];

    //sprintf(ch, "hello world");
    sprintf(ch, "%d+%d=%d", 1, 2, 3);
    sprintf(ch, "%02d+%02d=%02d", 1, 2, 3);
    sprintf(ch, "%x+%o=%d", 0xabc, 110, 17);

    printf("%s\n", ch);

    return EXIT_SUCCESS;
}

int test_1(void) {
    //char ch[] = "abc+110=3";
    char ch[] = "helloworld";
    int a, b, c;
    char str1[100];
    char str2[100];
    //sscanf(ch, "%x+%o=%d", &a, &b, &c);

    //sscanf(ch, "%[^\n]", str);
    sscanf(ch, "%5s%s", str1, str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    //printf("%d\n", a);
    //printf("%d\n", b);
    //printf("%d\n", c);
    return 0;
}

int main() {
    test_1();
    return 1;
}