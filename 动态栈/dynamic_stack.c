#include "DynamicStack.h"


Stack InitDynamicStack(Stack s)//栈的初始化(栈中的最开始结点不使用)
{
    static stack ss;
    if (NULL != s)
        free(s->pos);

    s = &ss;
    s->pos = (Postion *)malloc(sizeof(Postion));
    s->top = 1;
    s->capacity = 1;
    return s;
}

static Stack ExpandCapacity(Stack s)    //扩大栈的容量
{
    Postion *P = realloc(s->pos, sizeof(Postion)*(s->capacity)*2);
    if (NULL == P)
    {
        printf("扩容失败\n");
        assert(P);
    }
    else
    {
        s->pos = P;
        s->capacity *= 2;
    }
    return s;
}

int DynamicStackPush(Stack s, Postion p)//进栈
{
    if (s->top >= s->capacity)
    {
        s = ExpandCapacity(s);
    }
    s->top++;
    s->pos[s->top-1].x = p.x;
    s->pos[s->top-1].y = p.y;
    return s->top;
}

static Stack ReduceCapacity(Stack s) //减小栈的容量
{
    s->pos = realloc(s->pos, sizeof(Postion)*(s->capacity)/2+1);
    return s;
}

Postion DynamicStackPop(Stack s)//出栈
{
    Postion p;
    if (s->top <= 1)
    {
        printf("出栈失败，栈为空\n");
        assert(0);    
    }
    p.x = s->pos[s->top-1].x;
    p.y = s->pos[s->top-1].y;
    s->top--;
    if (s->top < (s->capacity/2))
    {
        s = ReduceCapacity(s);
    }
    return p;
}

Postion GetStackTopPoint(Stack s)//获取栈顶元素
{
    if (s->top <= 1)
    {
        printf("栈已空，无栈顶元素\n");
        assert(0);
    }
    return s->pos[s->top-1];
}

int GetStackPointCount(Stack s)//获取栈中元素的个数
{
    if (s->top < 1)
    {
        assert(0);
    }
    return s->top-1;
}