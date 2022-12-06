// pattern 13 -> Double half pyramid of stars
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Star pattern 9: \n");
    // Actual half pyaramid starts
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // Inverted half pyaramid starts
    for(i=n-1;i>=1;i--)  // change
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}