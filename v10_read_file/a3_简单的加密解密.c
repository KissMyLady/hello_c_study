//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:32

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int test_1(const char* decryptTxt, const char* encryptTxt) {
    FILE *fp1 = fopen(decryptTxt, "r");  //解密
    FILE *fp2 = fopen(encryptTxt, "w");  //加密

    if (!fp1 || !fp2) {
        return -1;
    }
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        //加密
        ch++;
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return EXIT_SUCCESS;
}

int test_2(const char* decryptTxt, const char* encryptTxt) {
    FILE *fp1 = fopen("D:/加密.txt", "r");
    FILE *fp2 = fopen("D:/解密文件.txt", "w");
    if (!fp1 || !fp2)
        return -1;
    char ch;
    while ((ch = fgetc(fp1)) != EOF) {
        ch--;
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}


int main() {
    //文件路径 字符串
    const char *filePath_encrypt = "/home/mylady/code/shell_script/logs/val_log.txt";  //加密
    const char *filePath_decrypt = "/home/mylady/code/shell_script/logs/val_log.txt";  //解密

    test_1();
    return 1;
}