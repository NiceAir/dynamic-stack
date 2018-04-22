#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
typedef struct positon{
    int x;
    int y;
}Postion;

typedef struct stack{
    int top;
    int capacity;
    Postion *pos;
}*Stack, stack;

Stack InitDynamicStack(Stack s);//栈的初始化

int DynamicStackPush(Stack s, Postion p);//进栈

Postion DynamicStackPop(Stack s);//出栈

Postion GetStackTopPoint(Stack s);//获取栈顶元素

int GetStackPointCount(Stack s);//获取栈中元素的个数