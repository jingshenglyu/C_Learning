// 3 function for swap

#include <stdio.h>

void swap1(int x, int y), swap2(int *px, int *py),
    swap3(int *px, int *py);

int main(void)
{

    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    swap1(a, b);
    printf("After calling swap1: a = %d b = %d\n", a, b);

    a = 1;
    b = 2;
    swap2(pa, pb);
    printf("After calling swap1: a = %d b = %d\n", a, b);


    a = 1;
    b = 2;
    swap3(pa, pb);
    printf("After calling swap1: a = %d b = %d\n", a, b);

    return 0;
}

void swap1(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    // 改变了形参的值，但是不会影响实参，在主函数中，调用swap1()后，定义的变量被销毁
}

void swap2(int *px, int *py)
{
    int t;
    t = *px;
    *px = *py;
    *py = t;
}

void swap3(int *px, int *py)
{
    int *pt;
    pt = px;
    px = py;
    py = pt;
}