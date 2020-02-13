#include <stdio.h>

int main() 
{
    int price = 0;
    
    
    printf("Please input the price：");
    scanf("%d", &price);
    
    int change = 100 - price;
    
    printf("Give the change %d to you. \n", change);

    return 0;
}
