#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void swap(int a, int b) {
    printf("a=%p\n", &a);
    printf("b=%p\n", &b);
    int temp = a;
    a = b;
    b = temp;
}

int main08() {

    int a = 10;
    int b = 20;

    printf("a=%p\n", &a);
    printf("b=%p\n", &b);
    swap(a, b);
    printf("%d\n", a);
    printf("%d\n", b);

    return EXIT_SUCCESS;
}
