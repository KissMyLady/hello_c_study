#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//�������Ե����Լ�  ��Ϊ�ݹ麯��  
void BubbleSort(int *, int);

int main0601() {

    int arr[] = {9, 1, 5, 6, 8, 2, 7, 10, 4, 3};
    //ȫ�ֺ�������������������Ψһ��
    //��������������Ŀ�������ļ���ʹ��
    //�������ڣ��ӳ��򴴽�����������
    BubbleSort(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return EXIT_SUCCESS;
}

void fun07();

//��̬����
//��̬�������Ժ�ȫ�ֺ�������
//�����򣺵�ǰ�ļ���
//�������ڣ��ӳ��򴴽�����������
static void fun07() {
    //fun07();
    printf("hello world1\n");
}

int main0602(void) {
    fun07();
}