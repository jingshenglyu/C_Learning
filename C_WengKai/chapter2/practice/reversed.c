// input a number,then reverse it.

#include <stdio.h>

int main()
{
    int n, t = 0;
    printf("Please input a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        t = t * 10 + n % 10;
        n = n / 10;       
    }

    printf("%d\n", t);
    return 0;

}