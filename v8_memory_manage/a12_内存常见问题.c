#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main1201() {
    //�����±�Խ��
    //char ch[11] = "hello world";

    char *p = (char *) malloc(sizeof(char) * 11);
    strcpy(p, "hello world");

    printf("%s\n", p);
    free(p);
    return EXIT_SUCCESS;
}

int main1202(void) {
    //Ұָ��
    //int* p = (int*)malloc(0);
    //���ٿռ�����Ͷ�Ӧ
    int *p = (int *) malloc(10);
    //int* p=(int*)malloc(sizeof(int)*10);
    p[0] = 123;
    p[1] = 456;
    p[2] = 789;
    printf("%p\n", p);
    //*p = 100;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    free(p);
    return 0;
}

int main1203(void) {
    int *p = (int *) malloc(sizeof(int) * 10);
    int *temp = p;

    for (int i = 0; i < 10; i++) {
        *p = i;
        //ָ����� ���ϸı�ָ�뷽�� �ͷŻ����
        p++;
    }


    free(p);
    //�ѿռ䲻�������ͷ�
    p = NULL;
    //��ָ���������ͷ�
    free(p);

    return 0;
}

void fun08(int *p) {
    p = (int *) malloc(sizeof(int) * 10);
    printf("�βΣ�%p\n", p);
}

void fun09(int **p) {
    *p = (int *) malloc(sizeof(int) * 10);
    printf("�βΣ�%p\n", *p);
}

//����ֵ
int *fun10() {
    int *p = (int *) malloc(sizeof(int) * 10);
    return p;
}

int main(void) {
    int *p = NULL;
    //ֵ����
    //fun08(p);
    //��ַ����
    //fun09(&p);
    p = fun10();
    printf("ʵ�Σ�%p\n", p);

    for (int i = 0; i < 10; i++)
        p[i] = i;

    for (int i = 0; i < 10; i++) {
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}
//���ٶѿռ�洢��ά����  ָ������
//int** p=(int**)malloc(sizeof(int*)*10);
