#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//������   ȫ�ֱ������Ժ;ֲ���������
//ȫ�ֱ���  �ں����ⲿ����ı���
//������������Ŀ�������ļ�  ����������ļ���ʹ�� ��Ҫ����
//�������ڣ��ӳ��򴴽�����������
int a = 10;

void fun02() {
    a = 100;
    printf("%d\n", a);
}

int main02() {

    //�����ڲ���ʱ����þͽ�ԭ��
    printf("%d\n", a);
    int a = 123;
    printf("%p\n", &a);
    //�����ڲ�����
    {
        int a = 456;
        //a = 456;
        printf("%p\n", &a);
        printf("%d\n", a);
    }
    printf("%d\n", a);

    fun02();
    fun03();
    return EXIT_SUCCESS;
}
