#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1101() {
    //int* p = (int*)malloc(sizeof(int) * 10);

    ////memset()重置内存空间的值
    ////memset(p, 0, sizeof(int)*10);
    //memset(p, 1, 40);
    //for (int i = 0; i < 10; i++)
    //{

    //	printf("%d\n", p[i]);
    //}

    //free(p);

    //char ch[10];

    ////memset(ch, 'A', sizeof(char) * 10);
    //memset(ch, 0, sizeof(char)*10);

    //printf("%s\n", ch);
    return EXIT_SUCCESS;
}

int main1102(void) {
    //int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    //int* p = (int*)malloc(sizeof(int) * 10);

    ////字符串拷贝  strcpy()
    ////内存拷贝
    //memcpy(p, arr, sizeof(int) * 10);

    //for (int i = 0; i < 10; i++)
    //{
    //	printf("%d\n", p[i]);
    //}
    //free(p);

    //char ch[] = "hello\0 world";
    //char str[100];
    ////字符串拷贝遇到\0停止
    ////strcpy(str, ch);
    ////内存拷贝  拷贝的内容和字节有关
    //memcpy(str, ch, 13);
    ////printf("%s\n", str);
    //for (int i = 0; i < 13; i++)
    //{
    //	printf("%c", str[i]);
    //}


    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //如果拷贝的目标和源发生重叠 可能报错
    memcpy(&arr[5], &arr[3], 20);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

int main1103(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //如果拷贝的目标和源发生重叠 可能报错
    //memcpy(&arr[5], &arr[3], 20);

    memmove(&arr[5], &arr[3], 20);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}

int main1104(void) {
    //int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    //int arr2[] = { 1,2,3,4,5 };

    char arr1[] = "hello\0 world";
    char arr2[] = "hello\0 world";
    //strcmp();
    int value = memcmp(arr1, arr2, 13);

    printf("%d\n", value);

    return 0;
}