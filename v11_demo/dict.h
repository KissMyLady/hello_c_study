#pragma once

#include<stdlib.h>

typedef struct DICT {
    char *word;
    char *trans;
} dict;

typedef struct POSTION {
    int start;
    int end;
} pos;

//
dict *list = NULL;
//记录单词的下标
pos *index = NULL;


//函数声明
//获取单词库中的单词和翻译
int GetWord();

//查找单词
int SearchWord(char *word, char *trans, int idx);

//销毁数据
void DestorySpace();
