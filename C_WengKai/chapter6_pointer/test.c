#include<stdio.h>

int main()
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    //int a[] = {0};

    int *p = &a[1];
    int c;

    c = p[2];
    //c = *p == a[0];
    printf("%d\n", c);
    // return 0;
}