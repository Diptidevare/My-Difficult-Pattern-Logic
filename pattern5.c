#include <stdio.h>

int main() 
{
    int i ,j,k,a;
    for( i=69;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
            
        }
        
        for(k=65;k>i-4;k--)
        {
           printf(" ");
           if(k<=64)
           {
               printf(" ");
           }
        }
        for(k=i;k>=65;k--)
        {
            if(k==69)
            {
                continue ;
            }
            printf("%c",k);
            
        }
        printf ("\n");
    }
return 0;
}