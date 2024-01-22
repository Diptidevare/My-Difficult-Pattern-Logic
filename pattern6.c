#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            
            printf(" ");
            
        }
        for(k=1;k<=i;k++)
        {
            if(i<=3)
            {
            printf("*");
            printf(" ");
            }
            if(i==3)
            {
                printf(" ");
                printf(" ");
                printf("*");
                break;
            }
        }      
       if(i>=4)
       {
         for(j=4;j<=i;j++)
         {
             printf(" ");
         }
        for(k=0;k<=5-i;k++)
        {
            
            printf("*");
            printf(" ");
        }
       }
    
        printf("\n");
    }
return 0;
}