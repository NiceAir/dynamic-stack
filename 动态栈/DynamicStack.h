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

Stack InitDynamicStack(Stack s);//ջ�ĳ�ʼ��

int DynamicStackPush(Stack s, Postion p);//��ջ

Postion DynamicStackPop(Stack s);//��ջ

Postion GetStackTopPoint(Stack s);//��ȡջ��Ԫ��

int GetStackPointCount(Stack s);//��ȡջ��Ԫ�صĸ���