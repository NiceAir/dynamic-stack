#include "DynamicStack.h"


Stack InitDynamicStack(Stack s)//ջ�ĳ�ʼ��(ջ�е��ʼ��㲻ʹ��)
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

static Stack ExpandCapacity(Stack s)    //����ջ������
{
    Postion *P = realloc(s->pos, sizeof(Postion)*(s->capacity)*2);
    if (NULL == P)
    {
        printf("����ʧ��\n");
        assert(P);
    }
    else
    {
        s->pos = P;
        s->capacity *= 2;
    }
    return s;
}

int DynamicStackPush(Stack s, Postion p)//��ջ
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

static Stack ReduceCapacity(Stack s) //��Сջ������
{
    s->pos = realloc(s->pos, sizeof(Postion)*(s->capacity)/2+1);
    return s;
}

Postion DynamicStackPop(Stack s)//��ջ
{
    Postion p;
    if (s->top <= 1)
    {
        printf("��ջʧ�ܣ�ջΪ��\n");
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

Postion GetStackTopPoint(Stack s)//��ȡջ��Ԫ��
{
    if (s->top <= 1)
    {
        printf("ջ�ѿգ���ջ��Ԫ��\n");
        assert(0);
    }
    return s->pos[s->top-1];
}

int GetStackPointCount(Stack s)//��ȡջ��Ԫ�صĸ���
{
    if (s->top < 1)
    {
        assert(0);
    }
    return s->top-1;
}