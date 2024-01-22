#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=13;i++)
    {
        if(i<=7)
        {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        }
        for(k=1;k<=8-i;k++)
        {
            if(i>=8)
            {
                break;
            }
            printf("*");
            printf(" ");
        }      
       if(i>=8)
       {
         for(j=1;j<=14-i;j++)
         {
             printf(" ");
         }
          for(k=7;k<=i;k++)
        {
            printf("*");
            printf(" ");
        }
       }
    
        printf("\n");
    }
    
return 0;
}