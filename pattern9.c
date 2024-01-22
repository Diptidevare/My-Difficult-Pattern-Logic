#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        if(i<=3)
        {
       for(j=1;j<=3;j++)
       {
           printf ("  ");
       }
       printf ("*");
        }
       if(i==4)
       {
           for(k=1;k<=7;k++)
           {
               printf("*");
               printf(" ");
           }
       }
       if(i>=5)
       {
           for(k=1;k<=3;k++)
           {
               printf("  ");
           }
           printf("*");
       }
      
       
        printf("\n");
    }
return 0;
}