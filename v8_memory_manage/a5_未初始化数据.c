#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//δ��ʼ����ȫ�ֱ���
//int abc;
//δ��ʼ���ľ�̬ȫ�ֱ���
//static int abc;
int main05() {

    //int abc;
    //δ��ʼ���ľ�̬�ֲ�����
    static int abc;
    //�ֲ�����δ��ʼ��ֵΪ����
    printf("%d\n", abc);

    return EXIT_SUCCESS;
}
