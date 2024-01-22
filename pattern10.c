#include <stdio.h>

int main() 
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        if(i<=3)
        {
            printf(" * ");
        
       for(j=1;j<=2;j++)
       {
         
           printf ("   ");
       }
       printf(" * ");
       if(i==1)
       {
           printf(" * ");
           printf(" * ");
           printf(" * ");
       }
      
        }
    
       if(i==4)
       {
           
           for(k=1;k<=7;k++)
           {
           
               printf(" * ");
           }
          
       }
       if(i>=5)
       {
           for(k=1;k<=3;k++)
           {
               if(i==7)
               {
                   printf(" * ");
                   printf(" * ");
                   printf(" * ");
                   break;
               }
               printf("   ");
           }
           printf(" * ");
           for(k=1;k<=2;k++)
           {
               printf("   ");
           }
           printf(" * ");
           
       }
      
       
        printf("\n");
    }
return 0;
}