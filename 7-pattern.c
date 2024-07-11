#include <stdio.h>
int main()
{
    int i, j, k;
    for(i = 1; i <= 10; i++)
    {
        for(j = 10 - i; j >= 0; j--)
        {
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i = 9; i >= 1; i--)  
    {
        for(j = 0; j <= (10 - i); j++) 
        {
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
}