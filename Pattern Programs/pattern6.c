// pattern 6 -> Half pyramid of stars (right side)
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Star pattern 4: \n");
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=n;j++)
        { 
          if((i+j)<=n)
            printf("  ");
          else 
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}