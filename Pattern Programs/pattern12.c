// pattern 12 -> Double full pyramid (kite shape) of stars
#include <stdio.h>
int main()
{
    int i,j,n,space;
    printf("Enter rows: ");
    scanf("%d",&n);  
    printf("Star pattern 8: \n");
   // Actual pyramid starts
    for(i=1;i<=n;i++)
    // for(i=1;i<=n-1;i++)
    {   
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)   // Best approach
        { 
            printf("*");  
        }
        printf("\n");
    }
   // Inverted pyramid starts
    for(i=n-1;i>=1;i--)  // change
    // for(i=n;i>=1;i--)
    {   
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)   // Best approach
        { 
            printf("*");  
        }
        printf("\n");
    }
    return 0;
}