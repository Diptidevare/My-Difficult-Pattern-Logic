#include <stdio.h>

int main() 
{
    int i,j,k,l;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if(i>=6)
            {
                break;
            }
            printf("*");
            printf(" ");
        }      
       
          if(i>=6)
        {
            printf(" ");
            if(i>=7)
            {
                printf(" ");
            }
            if(i>=8)
            {
                printf(" ");
            }
            if(i>=9)
            {
                printf(" ");
            }
        for(k=1;k<=10-i;k++)
        {
            
            printf("*");
            printf(" ");
        }
        }
        printf("\n");
    }
return 0;
}