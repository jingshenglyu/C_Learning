// pointer operation
/* 指针加1时，加的值为sizeof */

#include<stdio.h>

int main(void)
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9}; //define an array
    char *p = ac;
    printf("p = %p\n", p);
    printf("p+1 = %p\n", p+1);

    int ai[] = {0,1,2,3,4,5,6,7,8,9}; //define an array
    int *q = ai;
    printf("q = %p\n", q);
    printf("q+1 = %p\n", q+1);

    return 0;

}

/*
Output:
p = 0x7ffc83a0d7de
p+1 = 0x7ffc83a0d7df
q = 0x7ffc83a0d7b0
q+1 = 0x7ffc83a0d7b4

(p+1) - p = 1
(q+1) - q = 4

Reason:
sizeof(char) = 1
sizeof(int)  = 4
*/