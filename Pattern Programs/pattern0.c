// pattern 0 -> square pattern of stars
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Star pattern 0:\n");
    // use nested for loop
    for(i=0;i<n;i++) // rows
    {
        for(j=0;j<5;j++) // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}