// Dynamicc memory allocation

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    void *p;
    int cnt = 0;
    while (p = malloc(110*1024*1024))
    {
        cnt++;
    }
    printf("Allocate %d00MB memory\n", cnt);

    return 0;
    
}