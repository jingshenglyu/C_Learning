// union
#include<stdio.h>

typedef union 
{
    int i;
    char ch[sizeof(int)];
}CHI;

int main(int argc, char const *argv[])
{
    CHI chi;
    int i;
    chi.i = 1234;
    for ( i = 0; i < sizeof(int); i++)
    {
        printf("%02hhX", chi.ch[i]);
    }

    printf("\n");

    return 0;
}

/*
theoretic output:
000004D2
Because our PC is x86.(little endian)
real output:
D2040000

*/
    
