#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int test_1() {

    char ch[] = "    -123-456abc123";

    int i = atoi(ch);
    printf("%d\n", i);
    return EXIT_SUCCESS;
}

int test_2() {

    char ch[] = "    -123.456-456abc123";

    double i = atof(ch);
    printf("%.2f\n", i);
    return EXIT_SUCCESS;
}

int test_3() {
    char ch[] = "    -123.456-456abc123";

    long i = atol(ch);
    printf("%ld\n", i);
    return EXIT_SUCCESS;
}

int main() {
    test_1();
    return 1;
}