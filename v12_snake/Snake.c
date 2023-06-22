//coding:utf-8
//Author:mylady
//Datetime:2023/6/23 1:44

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include"Snake.h"

/*
1、定义蛇的结构体
2、初始化蛇和食物
3、开始游戏
	蛇和墙的碰撞
	蛇和自身碰撞
	蛇和食物碰撞
		重新随机食物
		蛇身体增长
		分数增长
	方向键控制
4、游戏结束

*/
void InitFood() {
    food[0] = rand() % WIDE;
    food[1] = rand() % HIGH;
}

void InitSnake() {
    snake.size = 2;

    snake.body[0].X = WIDE / 2;
    snake.body[0].Y = HIGH / 2;

    snake.body[1].X = WIDE / 2 - 1;
    snake.body[1].Y = HIGH / 2;
}

void ShowUI() {
    COORD coord;
    //更新末尾空格
    coord.X = lx;
    coord.Y = ly;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    putchar(' ');
    //显示蛇的位置
    for (int i = 0; i < snake.size; i++) {
        coord.X = snake.body[i].X;
        coord.Y = snake.body[i].Y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        if (i == 0)
            putchar('@');
        else
            putchar('*');
    }
    //显示食物位置

    coord.X = food[0];
    coord.Y = food[1];
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    putchar('#');
}

void PlayGame() {
    char key = 'D';
    while (snake.body[0].X >= 0 && snake.body[0].X < WIDE
           && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH) {

        //显示界面
        ShowUI();
        //方向控制
        while (_kbhit()) {
            key = _getch();
        }
        switch (key) {
            case 'D':
            case 'd':
                dx = 1;
                dy = 0;
                break;
            case 'A':
            case 'a':
                dx = -1;
                dy = 0;
                break;
            case 'W':
            case 'w':
                dx = 0;
                dy = -1;
                break;
            case 'S':
            case 's':
                dx = 0;
                dy = 1;
                break;
        }


        //是否和自身碰撞
        for (int i = 1; i < snake.size; i++) {
            if (snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y) {
                return;
            }
        }

        //蛇和食物的碰撞
        if (snake.body[0].X == food[0] && snake.body[0].Y == food[1]) {

            //随机新食物
            InitFood();
            //蛇身体增长
            snake.size++;
            //分数增长
            score += 10;
            //关卡 速度  障碍物
        }


        //蛇更新坐标

        lx = snake.body[snake.size - 1].X;
        ly = snake.body[snake.size - 1].Y;

        for (int i = snake.size - 1; i > 0; i--) {
            snake.body[i].X = snake.body[i - 1].X;
            snake.body[i].Y = snake.body[i - 1].Y;
        }
        //更新蛇头
        snake.body[0].X += dx;
        snake.body[0].Y += dy;

        Sleep(100);
        //system("cls");

    }

}

void InitWall() {
    for (int i = 0; i <= HIGH; i++) {
        for (int j = 0; j <= WIDE; j++) {
            if (i == HIGH)
                putchar('=');
            else if (j == WIDE)
                putchar('=');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}

void test_1() {
    srand((size_t) time(NULL));

    //去掉控制台光标
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = sizeof(cci);
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);


    InitWall();
    InitFood();
    InitSnake();

    //ShowUI();
    PlayGame();

    //getchar();
}


int main() {
    //gcc -o hello.exe c1_main.c c2_fun.c c3_fun.h c4_head.h


    //gcc -o snake_game.exe Snake.c Snake.h

    test_1();
    return EXIT_SUCCESS;
}


