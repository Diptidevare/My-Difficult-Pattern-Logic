#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        if(i<=1)
        {
       for(j=1;j<=6;j++)
       {
           printf (" * ");
       }
      
        }
       if(i>=2&&i<=5)
       {
           printf(" * ");
           for(k=1;k<=4;k++)
           {
           
               printf("   ");
           }
           printf(" * ");
       }
       if(i==6)
       {
           for(k=1;k<=6;k++)
           {
               printf(" * ");
           }
           
       }
      
       
        printf("\n");
    }
return 0;
}