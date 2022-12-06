// pattern 9 -> Full pyramid of stars
#include <stdio.h>
int main()
{   
    int i,j,n,space;
    printf("Enter rows: ");
    scanf("%d",&n);  
    printf("Star pattern 5: \n");
     for(i=1;i<=n;i++)
    {   
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        { 
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    
  // Best solution
/*  int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Star pattern 5: \n");
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=n;j++)
        { 
          if((i+j)<=n)
            printf(" ");
          else 
            printf("* ");
        }
        printf("\n");
    }   
     return 0;
*/

}