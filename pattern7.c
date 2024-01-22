#include <stdio.h>

int main() 
{
    int i,j,k,a,l;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
        {
        for(j=1;j<=i;j++)
        {
           
            
            printf(" ");
            
            
        }
        printf("*");
        }
        if(i<3)
        {
            a=2*i;
        for(k=1;k<=5-a;k++)
        {
            printf(" ");
        } 
        
        printf("*");
        }
       if(i>3)
       {
         for(k=1;k<=6-i
         ;k++)
         {
             printf(" ");
         }
         printf("*");
         a=(i/2)-1;
        for(k=1;k<i-2;k++)
        {
            printf(" ");
        }
        if(i>=5)
        {
            printf(" ");
        }
        printf("*");
       }
    
        printf("\n");
    }
return 0;
}