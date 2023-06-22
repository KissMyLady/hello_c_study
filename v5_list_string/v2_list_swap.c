//coding:utf-8
//Author:mylady
//Datetime:2023/6/22 14:18

#include <stdio.h>

void test_1() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]) - 1;

    while (i < j) {
        //通过临时变量交换数据
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }


}

int main() {
    test_1();
    return 1;
}