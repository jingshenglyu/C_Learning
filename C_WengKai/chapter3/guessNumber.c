/*Guess a number from 1 to 100
if-else nested statement
*/

#include<stdio.h>

int main()
{
    int PC_number = 38; // the numbber from PC
    int yournumber;

    printf("Please input your number: ");   //input your number 
    scanf("%d", &yournumber);
    if (yournumber == PC_number)
    {
        printf("Good!You are right! \n");
    }
    else
    {
        if (yournumber > PC_number)
        {
            printf("Sorry!Your number is bigger than the number of PC.\n");
        }
        else
        {
            printf("Sorry!Your number is smaller than the number of PC.\n");
        }
    
    }

    return 0;
    
    
}