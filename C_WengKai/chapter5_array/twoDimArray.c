// output a matrix using two-dimension array
#include<stdio.h>
int main()
{
    int a[2][5] = //int a[][5] 也可以，编译器可以数行数
    {
        {0,1,2,3,4},
        {2,3,4,5,6},
    };
    int i, j;

    for (i=0; i<2; ++i)
    {
        for (j=0; j<5; ++j)
        {
            //带间距输出
            //printf("%-2d\x20\n", a[i][j]);
            printf("%d", a[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}