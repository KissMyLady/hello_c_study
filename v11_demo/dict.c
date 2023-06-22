//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:42
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include"dict.h"

#define SIZE 111104

/*
1、创建结构体存储单词和翻译
2、读取单词 格式化存储对应的堆空间中
3、单词查找
4、销毁堆空间
*/

int GetWord() {
    FILE *fp = fopen("D:/dict.txt", "r");
    if (!fp) {
        printf("加载单词库失败\n");
        return -1;
    }
    list = (dict *) malloc(sizeof(dict) * SIZE);

    index = (pos *) malloc(sizeof(pos) * 27);
    char flag = 'a';//记录当前索引标志位
    index[0].start = 0;//记录a的索引
    index[0].end = 0;
    int idx = 0;//字母对应的索引

    int i = 0;//数组下标
    char *temp = (char *) malloc(sizeof(char) * 1024);
    while (!feof(fp)) {
        memset(temp, 0, 1024);
        fgets(temp, 1024, fp);
        //开辟单词的堆空间 #a\n\0
        //去掉\n
        temp[strlen(temp) - 1] = 0;
        list[i].word = (char *) malloc(sizeof(char) * strlen(temp));
        //将单词放在指定堆空间中
        strcpy(list[i].word, &temp[1]);

        //创建索引
        //0-25   index[0].start index[0].end b
        if (idx != 26) {
            if (list[i].word[0] == flag) {
                index[idx].end++;
            } else {
                idx++;
                index[idx].start = index[idx - 1].end;
                index[idx].end = index[idx - 1].end + 1;
                flag++;
            }
        }


        memset(temp, 0, 1024);
        fgets(temp, 1024, fp);//Trans:art. 一;字母A\n

        //去掉\n
        temp[strlen(temp) - 1] = 0;
        list[i].trans = (char *) malloc(sizeof(char) * strlen(temp) - 5);
        strcpy(list[i].trans, &temp[6]);

        i++;
    }

    //释放和关闭文件
    free(temp);
    fclose(fp);


    //记录中文的索引
    index[26].start = index[25].end;
    index[26].end = SIZE;
    //for (int i = 0; i < 27; i++)
    //{
    //	printf("%c的起始位置：%d\n", 'a' + i, index[i].start);
    //	printf("%c的起始位置：%d\n", 'a' + i, index[i].end);
    //}


    //for (int i = 0; i < SIZE; i++)
    //{
    //	printf("%s\n", list[i].word);
    //	printf("%s\n", list[i].trans);
    //}

    return i;
}

int SearchWord(char *word, char *trans, int idx) {
    if (!word || !trans) {
        printf("输出发生异常\n");//exit(-1)
        return -1;
    }
    //a.m.
    for (int i = index[idx].start; i < index[idx].end; i++) {
        //如果用户输入的单词和词库中相同返回单词对应的翻译
        if (!strcmp(word, list[i].word)) {
            strcpy(trans, list[i].trans);
            return 0;
        }
    }
    return 1;
}

//数据销毁
void DestorySpace() {
    if (!list)
        return;
    if (index) {
        free(index);
        index = NULL;
    }
    for (int i = 0; i < SIZE; i++) {
        free(list[i].word);
        free(list[i].trans);
    }
    free(list);
    list = NULL;
}


int main() {
    //获取单词和翻译
    GetWord();

    //接收用户输入的单词
    char *word = (char *) malloc(sizeof(char) * 1024);
    //根据单词提供翻译
    char *trans = (char *) malloc(sizeof(char) * 1024);

    int idx = 0;
    while (1) {
        memset(word, 0, 1024);
        memset(trans, 0, 1024);
        scanf("%s", word);
        //gets(word);
        //scanf("%[^\n],word");
        //getchar();
        //出口
        if (!strcmp(word, "comm=exit"))
            break;

        //格式化 大小写转换

        //0-26
        if (*word >= 'a' && *word <= 'z')
            idx = *word - 'a';
        else
            idx = 26;
        if (!SearchWord(word, trans, idx))
            printf("%s\n", trans);
        else
            printf("未找到该单词\n");
    }

    free(word);
    free(trans);
    DestorySpace();
    return EXIT_SUCCESS;
}
