// pattern 2 -> Inverted half pyramid of stars
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Star pattern 2: \n");
    // updated j loop (method-1)
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }

 /*  // updated i loop (method-2)
     for(i=n;i>0;i--) 
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }     */
    return 0;
}