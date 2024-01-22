#include <stdio.h>

int main() 
{
    int i,j,k;
   
    
    for(i=5;i>=1;i--)
    {
        if(i<=4)
        {
        for(j=5;j>i;j--)
        {
            printf(" %d ",j);
        }
        }
        for(k=1;k<2*i;k++)
        {
            printf(" %d ",i);
        }
        if(i<=4)
        {
            for(j=i+1;j<=5;j++)
            {
                printf(" %d ",j);
            }
        }
    
    
            
    
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        if(i>=2&&i<=4)
        {
        for(j=5;j>i;j--)
        {
            printf(" %d ",j);
        }
        }
        for(k=1;k<2*i;k++)
        {
            printf(" %d ",i);
        }
        if(i>=2&&i<=4)
        {
            for(k=i+1;k<=5;k++)
            {
                printf(" %d ",k);
            }
        }
        printf("\n");
    }
return 0;
}