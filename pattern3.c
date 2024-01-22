#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
            printf(" ");
            
        }
        for(k=i;k>1;k--)
        {
            if(k!=0)
            {
                printf("%d",k-1);
                printf(" ");
                
            }
        }
        printf("\n");
    }
return 0;
}