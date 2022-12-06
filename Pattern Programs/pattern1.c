// pattern 1 -> Half pyramid of stars
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Star pattern 1: \n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}