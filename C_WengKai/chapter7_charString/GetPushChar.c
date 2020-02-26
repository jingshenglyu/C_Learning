// getchar / pushchar
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}

/*
EOF status:
Linux / MacOs: Ctrl + D
Windows: Ctrl + Z

PC -> shell -> Terminal
*/