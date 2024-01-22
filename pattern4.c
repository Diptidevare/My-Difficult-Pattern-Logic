#include<stdio.h>

int main() 
{
    int i,j,k,a;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        a=(2*i+1);
        for(k=1;k<=10-a;k++)
        {
            printf(" ");
        }
        
        
        for(k=i;k>0;k--)
        {
                if(k<5)
                 {   
                printf("%d",k);}
                else if(k==5)
                {
                    for(k=4;k>0;k--)
                    {
                        printf("%d",k);
                    }
                }
                
               
        }
        printf("\n");
    }
	return 0;
}