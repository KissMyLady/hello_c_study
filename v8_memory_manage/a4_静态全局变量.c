#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//��̬ȫ�ֱ���  
//�����򣺿����ڱ��ļ���ʹ�� �������������ļ���ʹ��
//�������ڣ��ӳ��򴴽�����������
static int c = 10;

void fun05() {
    c = 20;
    printf("%d\n", c);

}

int main04() {

    printf("%d\n", c);
    fun05();
    //fun06();
    return EXIT_SUCCESS;
}
