#include "DynamicStack.h"
int main()
{
//-----------------test_DynamicStack----------------
   
    Stack s = NULL;
    Postion p[10];
    p[0].x=0;
    p[0].y=0;
    p[1].x=1;
    p[1].y=1;
    p[2].x=2;
    p[2].y=2;
    p[3].x=3;
    p[3].y=3;
    p[4].x=4;
    p[4].y=4;
    p[5].x=5;
    p[5].y=5;
    s = InitDynamicStack(s);

    DynamicStackPush(s, p[0]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPush(s, p[1]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPush(s, p[2]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPush(s, p[3]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPush(s, p[4]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPush(s, p[5]);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    printf("\n\n\n");
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
    DynamicStackPop(s);
    printf("count=%d   location=(%d, %d)\n", GetStackPointCount(s), GetStackTopPoint(s));
}
//-------------------test_stack_over--------------------------