/*Cont the character, include blank, digit, other*/
// switch

#include<stdio.h>
int main()
{
    int blank, digit, other;    // define int variable

    char ch;                    // define char variable
    int i;
    blank = digit = other = 0; // init
    printf("Please input 10 characters: ");
    for (int i = 1; i <= 10; i++)
    {
        ch = getchar();

        //cont the characters
        switch (ch)
        {
        case ' ':
        case '\n':
            blank ++;
            break;
        
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            digit ++;
            break;

        
        default:
            other ++;
            break;
        }
    }
    printf("blank = %d, digit = %d, other = %d \n", blank, digit, other);

    return 0;

}