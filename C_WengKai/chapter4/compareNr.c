/* Input a number:
If this number are same, show "Good"It's richt.
If this number is bigger, show "It's bigger".
If this number is smaller, show "It's smaller".
You can guess 7th at most.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int count = 0, flag, mynumber, yournumber;
    srand(time_t(0));
    mynumber = rand() % 100 + 1; // Using rand function 
    flag = 0;
    while(count<7)
    {
        printf("Input a number: ");
        scanf("%d", &yournumber);
        count ++;
        
        if(yournumber == mynumber)
        {
            printf("Good! Yor are right! \n");
            flag = 1;
            break;
        }
        else
        {
            if(yournumber > mynumber)
            {
                printf("Too big\n ");
            }
            else
            {
                printf("Too small \n");
            }
        }
    }
    if(flag == 0) // over 7th don't guess this number
    {
        printf("Game over! \n");
    }
        
    return 0;
        
    
}