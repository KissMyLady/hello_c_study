#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int getstrcount01(char *ch) {
    int i = 0;
    int count = 0;
    while (ch[i]) {
        if (ch[i] != ' ') {
            count++;
        }
        i++;
    }
    return count;
}

int getstrcount(char *ch) {
    int count = 0;
    while (*ch) {
        if (*ch != ' ')count++;
        ch++;
    }
    return count;
}

int main0601() {
    char ch[] = "    hello world   ";

    int len = getstrcount(ch);
    printf("打印长度len: %d \n", len);

    return EXIT_SUCCESS;
}

int main0603(void) {

    //统计字符串出现次数
    char ch[] = "helloworldnichoushachounizadizaichouyigeshishi";//97 97+26

    //存储字符串出现次数
    int arr[26] = {0};

    for (int i = 0; i < strlen(ch); i++) {
        arr[ch[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i])
            printf("��ĸ��%c���ִ�����%d\n", i + 'a', arr[i]);
    }
    return 0;


}